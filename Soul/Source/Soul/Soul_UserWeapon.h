#pragma once

#include "Soul.h"
#include "GameFramework/Actor.h"
#include "Soul_UserWeapon.generated.h"

UCLASS()
class SOUL_API ASoul_UserWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	ASoul_UserWeapon();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(VisibleAnywhere, Category = Weapon)
	USkeletalMeshComponent* Weapon_SKAR4;
};
