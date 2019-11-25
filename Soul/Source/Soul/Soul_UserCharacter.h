#pragma once

#include "Soul.h"
#include "GameFramework/Character.h"
#include "Soul_UserCharacter.generated.h"

UCLASS()
class SOUL_API ASoul_UserCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ASoul_UserCharacter();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void PostInitializeComponents() override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	enum class EControlMode
	{
		TPS, //ThirdPersonShooter
		FPS  //FirstPersonShooter
	};

	float ArmLengthTo = 0.0f;      // 캐릭터와 카메라 거리
	float ArmLengthSpeed = 0.0f;   // 카메라 전환 속도(Zoom 만들 때 사용)
	float ArmRotationSpeed = 0.0f; // 카메라 회전 속도

	// 사격 변수
	FTimerHandle timer;
	bool isFiring;

private:
	void SetControlMode(EControlMode NewControlMode);
	
	void UpDown(float NewAxisValue);
	void LeftRight(float NewAxisValue);
	void LookUp(float NewAxisValue);
	void Turn(float NewAxisValue);

public:
	UPROPERTY(VisibleAnywhere, Category = Camera)
	USpringArmComponent* UserCameraArm;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* Camera;

	// 사격 애니메이션 클래스
	UPROPERTY()
	class USoul_UserAnimInstance* SoulAnim;

	//// 총알 관련 ////
	// 발사 처리
	void StartFire();
	void Fire();
	void StopFire();

	// 카메라 위치에서의 총구 오프셋
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	FVector MuzzleOffset;

	// 총알을 스폰시킬 무기 클래스
	UPROPERTY(EditAnywhere, Category = BulletClass)
	class ASoul_UserWeapon* UserWeapon;

	// 스폰 시킬 총알 클래스
	UPROPERTY(EditAnywhere, Category = BulletClass)
	TSubclassOf<class ASoul_UserWeaponBullet> WeaponBulletClass;
};
