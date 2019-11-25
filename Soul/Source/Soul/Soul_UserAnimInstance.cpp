#include "Soul_UserAnimInstance.h"

USoul_UserAnimInstance::USoul_UserAnimInstance()
{
	CurrentPawnSpeed = 0.0f;	
	IsInAir = false;
}

void USoul_UserAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	auto Pawn = TryGetPawnOwner();

	if (::IsValid(Pawn))
	{
		CurrentPawnSpeed = Pawn->GetVelocity().Size();

		auto Character = Cast<ACharacter>(Pawn);
		if (Character)
			IsInAir = Character->GetMovementComponent()->IsFalling();
	}
}