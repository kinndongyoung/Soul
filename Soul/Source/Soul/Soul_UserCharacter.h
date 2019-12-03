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
	// ����
	enum class ETribes
	{
		HUMAN,
		ANGEL,
		DEVIL
	};

	// 1��Ī, 3��Ī
	enum class EControlMode
	{
		TPS, //ThirdPersonShooter
		FPS  //FirstPersonShooter
	};

	// enum
	ETribes e_tribes;

	float ArmLengthTo = 0.0f;      // ĳ���Ϳ� ī�޶� �Ÿ�
	float ArmLengthSpeed = 0.0f;   // ī�޶� ��ȯ �ӵ�(Zoom ���� �� ���)
	float ArmRotationSpeed = 0.0f; // ī�޶� ȸ�� �ӵ�

	// ��� ����
	FTimerHandle timer;
	bool isFiring;

public:
	bool isTrigger;	

private:
	void SetTribes(ETribes NewTribes);
	void SetControlMode(EControlMode NewControlMode);
	
	//// ���� ////
	// �ൿ	
	void UpDown(float NewAxisValue);
	void LeftRight(float NewAxisValue);
	void LookUp(float NewAxisValue);
	void Turn(float NewAxisValue);
	
public:
	// ī�޶�
	UPROPERTY(VisibleAnywhere, Category = Camera)
	USpringArmComponent* UserCameraArm;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* Camera;
	
	//// ������ ////
	// õ��
	// ��ġ
	void Angel_Installation_Start();
	void Angel_Installation_Repeat();
	void Angel_Installation_End();

private:
	//// HUD ////
	UPROPERTY()
	class ASoul_HUD* Angel_HUD;

	// ����
	float InstallPer;

public:
	// �ΰ�
	// ���
	void StartFire();
	void Fire();
	void StopFire();
	
	// ��� �ִϸ��̼� Ŭ����
	UPROPERTY()
	class USoul_UserAnimInstance* SoulAnim;

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
