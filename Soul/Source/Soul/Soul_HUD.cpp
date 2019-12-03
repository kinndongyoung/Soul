#include "Soul_HUD.h"
#include "Blueprint/UserWidget.h"
//#include "Components/ProgressBar.h"

ASoul_HUD::ASoul_HUD()
{
	Angel_Install_State = false;

	// UI Create & Initialize	
	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD_INSTALL(TEXT("/Game/Project_Soul/UI/BP_AngelInstalBar.BP_AngelInstalBar_C"));
	if (UI_HUD_INSTALL.Succeeded())
	{
		WidgetClass_InstallBar = UI_HUD_INSTALL.Class;
	}
}

void ASoul_HUD::BeginPlay()
{
	if (WidgetClass_InstallBar != nullptr && Angel_Install_State == true)
	{
		CurrentWidget_InstallBar = CreateWidget<UUserWidget>(GetWorld(), WidgetClass_InstallBar);

		if (CurrentWidget_InstallBar)
			CurrentWidget_InstallBar->AddToViewport();
	}
}