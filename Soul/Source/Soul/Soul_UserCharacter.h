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

	float ArmLengthTo = 0.0f;      // ĳ���Ϳ� ī�޶� �Ÿ�
	float ArmLengthSpeed = 0.0f;   // ī�޶� ��ȯ �ӵ�(Zoom ���� �� ���)
	float ArmRotationSpeed = 0.0f; // ī�޶� ȸ�� �ӵ�

	// ��� ����
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

	// ��� �ִϸ��̼� Ŭ����
	UPROPERTY()
	class USoul_UserAnimInstance* SoulAnim;

	//// �Ѿ� ���� ////
	// �߻� ó��
	void StartFire();
	void Fire();
	void StopFire();

	// ī�޶� ��ġ������ �ѱ� ������
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	FVector MuzzleOffset;

	// �Ѿ��� ������ų ���� Ŭ����
	UPROPERTY(EditAnywhere, Category = BulletClass)
	class ASoul_UserWeapon* UserWeapon;

	// ���� ��ų �Ѿ� Ŭ����
	UPROPERTY(EditAnywhere, Category = BulletClass)
	TSubclassOf<class ASoul_UserWeaponBullet> WeaponBulletClass;
};
