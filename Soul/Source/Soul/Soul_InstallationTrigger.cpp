#include "Soul_InstallationTrigger.h"
#include "DrawDebugHelpers.h"

ASoul_InstallationTrigger::ASoul_InstallationTrigger()
{
	OnActorBeginOverlap.AddDynamic(this, &ASoul_InstallationTrigger::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &ASoul_InstallationTrigger::OnOverlapEnd);
}

void ASoul_InstallationTrigger::BeginPlay()
{
	Super::BeginPlay();
	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Purple, true, -1, 0, 5);
}

void ASoul_InstallationTrigger::OnOverlapBegin(class AActor *OverlappedActor, class AActor *OtherActor)
{
	if (OtherActor && (OtherActor != this))
	{
		print("Overlap Begin");
		printf("Overlapped Actor = %s", *OverlappedActor->GetName());
	}
}

void ASoul_InstallationTrigger::OnOverlapEnd(class AActor *OverActor, class AActor *OtherActor)
{
	if (OtherActor && (OtherActor != this))
	{
		print("Overlap Ended");
		printf("Overlapped Actor = %s", *OverActor->GetName());
	}
}