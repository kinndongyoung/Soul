#include "Soul_UserController.h"
#include "Blueprint/UserWidget.h"

void ASoul_UserController::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void ASoul_UserController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
}

void ASoul_UserController::BeginPlay()
{
	Super::BeginPlay();

	// 프로젝트 셋팅 - 입력 부분을 받도록 설정
	FInputModeGameOnly InputMode;
	SetInputMode(InputMode);
}