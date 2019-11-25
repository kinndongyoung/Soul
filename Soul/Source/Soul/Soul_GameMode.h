#pragma once

#include "Soul.h"
#include "GameFramework/GameModeBase.h"
#include "Soul_GameMode.generated.h"

UCLASS()
class SOUL_API ASoul_GameMode : public AGameModeBase
{
	GENERATED_BODY()
	ASoul_GameMode();

public:
	virtual void PostLogin(APlayerController* NewPlayer) override;
};
