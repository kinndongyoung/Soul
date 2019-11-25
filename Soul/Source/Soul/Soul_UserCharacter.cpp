#include "Soul_UserCharacter.h"
#include "Soul_UserAnimInstance.h"
#include "Soul_UserWeapon.h"
#include "Soul_UserWeaponBullet.h"

// 생성자에서 User 초기화
ASoul_UserCharacter::ASoul_UserCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	
	// Camera Initialize
	UserCameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CAMERA_ARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));

	UserCameraArm->SetupAttachment(GetCapsuleComponent());
	Camera->SetupAttachment(UserCameraArm);

	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));
	UserCameraArm->TargetArmLength = 200.0f;
	UserCameraArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 40.0f), FRotator(-30.0f, 0.0f, 0.0f));
	
	// Skeletal Mesh Initialize
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_SOUL_USER(TEXT("/Game/AnimStarterPack/UE4_Mannequin/Mesh/SK_Mannequin.SK_Mannequin"));

	if (SK_SOUL_USER.Succeeded())
		GetMesh()->SetSkeletalMesh(SK_SOUL_USER.Object);
	
	// Anim Instance Initialize
	static ConstructorHelpers::FClassFinder<UAnimInstance> BP_ANIM_SOUL_USER(TEXT("/Game/Project_Soul/BluePrint/BP_SoulUser.BP_SoulUser_C"));

	if (BP_ANIM_SOUL_USER.Succeeded())
		GetMesh()->SetAnimInstanceClass(BP_ANIM_SOUL_USER.Class);

	// Value Initialize
	SetControlMode(EControlMode::TPS);

	ArmLengthSpeed = 3.0f;
	ArmRotationSpeed = 10.0f;

	// Jump Height
	GetCharacterMovement()->JumpZVelocity = 600.0f;

	// Bullet Initialize
	isFiring = false;
	MuzzleOffset = FVector(100.0f, 0.0f, 0.0f);
	
	static ConstructorHelpers::FObjectFinder<UBlueprint> BP_SOUL_WEAPON_BULLET(TEXT("/Game/Project_Soul/BluePrint/BP_SoulWeaponBullet.BP_SoulWeaponBullet"));

	if (BP_SOUL_WEAPON_BULLET.Succeeded())
		WeaponBulletClass = BP_SOUL_WEAPON_BULLET.Object->GeneratedClass;
}

void ASoul_UserCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Weapon Setting
	FName WeaponSocket(TEXT("WeaponPoint"));
	auto CurWeapon = GetWorld()->SpawnActor<ASoul_UserWeapon>(FVector::ZeroVector, FRotator::ZeroRotator);

	if (nullptr != CurWeapon)
	{
		CurWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, WeaponSocket);
		UserWeapon = CurWeapon;
	}		
}

void ASoul_UserCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UserCameraArm->TargetArmLength = FMath::FInterpTo(UserCameraArm->TargetArmLength, ArmLengthTo, DeltaTime, ArmLengthSpeed);
}

void ASoul_UserCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	SoulAnim = Cast<USoul_UserAnimInstance>(GetMesh()->GetAnimInstance());
}

void ASoul_UserCharacter::PossessedBy(AController * NewController)
{
	Super::PossessedBy(NewController);
}

// Input Key
void ASoul_UserCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ASoul_UserCharacter::Jump);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ASoul_UserCharacter::StartFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &ASoul_UserCharacter::StopFire);

	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &ASoul_UserCharacter::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &ASoul_UserCharacter::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ASoul_UserCharacter::Turn);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &ASoul_UserCharacter::LookUp);
}

// Set Camera Arm
void ASoul_UserCharacter::SetControlMode(EControlMode NewControlMode)
{
	ArmLengthTo = 200.0f;
	UserCameraArm->bUsePawnControlRotation = true;
	UserCameraArm->bInheritPitch = true;
	UserCameraArm->bInheritRoll = true;
	UserCameraArm->bInheritYaw = true;
	UserCameraArm->bDoCollisionTest = true;
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->bUseControllerDesiredRotation = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
}

// Move Character
void ASoul_UserCharacter::UpDown(float NewAxisValue)
{
	AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::X), NewAxisValue);
}

void ASoul_UserCharacter::LeftRight(float NewAxisValue)
{
	AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::Y), NewAxisValue);
}

// Rotate Character
void ASoul_UserCharacter::Turn(float NewAxisValue)
{
	AddControllerYawInput(NewAxisValue);
}

void ASoul_UserCharacter::LookUp(float NewAxisValue)
{
	AddControllerPitchInput(NewAxisValue);
}

// Fire
void ASoul_UserCharacter::StartFire()
{
	isFiring = true;
	SoulAnim->IsFire = isFiring;
	Fire();
}

void ASoul_UserCharacter::Fire()
{
	if (isFiring)
	{
		// 프로젝타일 발사를 시도합니다.
		if (WeaponBulletClass)
		{
			// MuzzleOffset 을 카메라 스페이스에서 월드 스페이스로 변환합니다.
			FVector MuzzleLocation = UserWeapon->ActorToWorld().GetLocation() + FVector(30.0f, 10.0f, 0.0f)/* + UserWeapon->ActorToWorld().TransformVector(MuzzleOffset)*/;
			FRotator MuzzleRotation = GetMesh()->GetComponentRotation() + FRotator(0.0f, 90.0f, 0.0f);

			// 조준을 약간 윗쪽으로 올려줍니다.
			MuzzleRotation.Pitch += 5.0f;
			UWorld* World = GetWorld();

			if (World)
			{
				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = this;
				SpawnParams.Instigator = Instigator;

				// 총구 위치에 발사체를 스폰시킵니다.
				ASoul_UserWeaponBullet* Bullet = World->SpawnActor<ASoul_UserWeaponBullet>(WeaponBulletClass, MuzzleLocation, MuzzleRotation, SpawnParams);
				if (Bullet)
				{
					// 발사 방향을 알아냅니다.
					FVector LaunchDirection = MuzzleRotation.Vector();
					Bullet->FireInDirection(LaunchDirection);
				}
			}
		}

		// 연사를 위한 StartFire 함수 생성
		GetWorld()->GetTimerManager().SetTimer(timer, this, &ASoul_UserCharacter::Fire, 0.1f, false);
	}
}

void ASoul_UserCharacter::StopFire()
{
	isFiring = false;
	SoulAnim->IsFire = isFiring;
}
