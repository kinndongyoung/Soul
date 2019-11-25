#include "Soul_GameMode.h"
#include "Soul_UserCharacter.h"
#include "Soul_UserController.h"

ASoul_GameMode::ASoul_GameMode()
{
	// ������� - Game Mode
	DefaultPawnClass = ASoul_UserCharacter::StaticClass();
	PlayerControllerClass = ASoul_UserController::StaticClass();
}

void ASoul_GameMode::PostLogin(APlayerController * NewPlayer)
{
	Super::PostLogin(NewPlayer);
}