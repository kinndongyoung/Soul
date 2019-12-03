#include "Soul_InstallationTrigger.h"
#include "Soul_UserCharacter.h"
#include "DrawDebugHelpers.h"

ASoul_InstallationTrigger::ASoul_InstallationTrigger()
{
	OnActorBeginOverlap.AddDynamic(this, &ASoul_InstallationTrigger::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &ASoul_InstallationTrigger::OnOverlapEnd);

	// Setting Install Mesh
	p_InstallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("INSTALL_MESH"));
	p_InstallMesh->SetupAttachment(GetCollisionComponent());
	p_InstallMesh->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f));
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
		ASoul_UserCharacter* pt_User = Cast<ASoul_UserCharacter>(OtherActor);
		pt_User->isTrigger = true;		
		
		if (pt_User == nullptr) print("pt_User == null");
	}
}

void ASoul_InstallationTrigger::OnOverlapEnd(class AActor *OverActor, class AActor *OtherActor)
{
	if (OtherActor && (OtherActor != this))
	{
		ASoul_UserCharacter* pt_User = Cast<ASoul_UserCharacter>(OtherActor);
		pt_User->isTrigger = false;

		if (pt_User == nullptr) print("pt_User == null");
	}
}