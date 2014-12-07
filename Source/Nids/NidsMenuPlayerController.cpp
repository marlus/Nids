
#include "Nids.h"
#include "NidsMenuPlayerController.h"

#include "NidsHUD.h"

ANidsMenuPlayerController::ANidsMenuPlayerController(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	// just use the normal camera...fine for now
	PlayerCameraManagerClass = APlayerCameraManager::StaticClass();
}

void ANidsMenuPlayerController::SetupInputComponent()
{
	// Skip AStrategyPlayerController::SetupInputComponent
	APlayerController::SetupInputComponent();
	APlayerController::bShowMouseCursor = true;
	APlayerController::bEnableClickEvents = true;

	// UIs
	BIND_ACTION(APlayerController::InputComponent, "MouseDown", IE_Pressed, &ANidsMenuPlayerController::MouseDown);
	BIND_ACTION(APlayerController::InputComponent, "MouseUp", IE_Released, &ANidsMenuPlayerController::MouseUp);
	BIND_AXIS(APlayerController::InputComponent, "Turn", &ANidsMenuPlayerController::MouseMove);
}

void ANidsMenuPlayerController::MouseDown()
{
	
}

void ANidsMenuPlayerController::MouseUp()
{
	
}

void ANidsMenuPlayerController::MouseMove(float Val)
{
	
}