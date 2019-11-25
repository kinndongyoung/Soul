#pragma once

#include "Soul.h"
#include "Engine/TriggerSphere.h"
#include "Soul_InstallationTrigger.generated.h"

UCLASS()
class SOUL_API ASoul_InstallationTrigger : public ATriggerSphere
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

public:
	ASoul_InstallationTrigger();

	UFUNCTION()
	void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);

	UFUNCTION()
	void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);
};
