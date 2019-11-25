#pragma once

#include "Soul.h"
#include "Animation/AnimInstance.h"
#include "Soul_UserAnimInstance.generated.h"

UCLASS()
class SOUL_API USoul_UserAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	USoul_UserAnimInstance();
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

private:
	void PlayFire();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	float CurrentPawnSpeed; // Ground 스테이트의 애니메이션 전환 값
							// CurrentPawnSpeed =< 0 : Idle
							// CurrentPawnSpeed  > 0 : Walk
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool IsInAir;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool IsFire;
};
