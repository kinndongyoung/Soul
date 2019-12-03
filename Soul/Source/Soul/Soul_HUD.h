#pragma once

#include "Soul.h"
#include "GameFramework/HUD.h"
#include "Soul_HUD.generated.h"

UCLASS()
class SOUL_API ASoul_HUD : public AHUD
{
	GENERATED_BODY()

public:
	ASoul_HUD();

protected:
	virtual void BeginPlay() override;

public:
	bool Angel_Install_State;

	UPROPERTY(EditAnywhere, Category = Angel_UI)
	TSubclassOf<class UUserWidget> WidgetClass_InstallBar;

	UPROPERTY(EditAnywhere, Category = Angel_UI)
	class UUserWidget* CurrentWidget_InstallBar;
};
