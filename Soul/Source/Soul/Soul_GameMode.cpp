#include "Soul_GameMode.h"
#include "Soul_UserCharacter.h"
#include "Soul_UserController.h"
#include "Soul_HUD.h"

ASoul_GameMode::ASoul_GameMode()
{
	// 월드셋팅 - Game Mode
	DefaultPawnClass = ASoul_UserCharacter::StaticClass();
	HUDClass = ASoul_HUD::StaticClass();
	PlayerControllerClass = ASoul_UserController::StaticClass();	
}

void ASoul_GameMode::PostLogin(APlayerController * NewPlayer)
{
	Super::PostLogin(NewPlayer);
}
