#pragma once

#include "Soul.h"
#include "GameFramework/Actor.h"
#include "Soul_UserWeaponBullet.generated.h"

UCLASS()
class SOUL_API ASoul_UserWeaponBullet : public AActor
{
	GENERATED_BODY()
	
public:	
	ASoul_UserWeaponBullet();

protected:
	// 게임 시작 또는 스폰시 호출됩니다.
	virtual void BeginPlay() override;

public:	
	// 매 프레임 호출됩니다.
	virtual void Tick(float DeltaTime) override;

	// 발사체의 속도를 발사 방향으로 초기화시킵니다.
	void FireInDirection(const FVector& ShootDirection);

public:
	// 구체 콜리전 컴포넌트입니다.
	UPROPERTY(VisibleDefaultsOnly, Category = Bullet)
	USphereComponent* CollisionComponent;

	// 프로젝타일 무브먼트 컴포넌트
	UPROPERTY(VisibleAnywhere, Category = Movement)
	class UProjectileMovementComponent* ProjectileMovementComponent;
};
