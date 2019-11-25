#pragma once

#include "Soul.h"
#include "GameFramework/PlayerController.h"
#include "Soul_UserController.generated.h"

UCLASS()
class SOUL_API ASoul_UserController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void PostInitializeComponents() override;
	virtual void OnPossess(APawn* aPawn) override;

protected:
	virtual void BeginPlay() override;
};
