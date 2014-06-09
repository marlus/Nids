

#include "Nids.h"
#include "NidsMenuGameMode.h"
#include "NidsHUD.h"
#include "NidsMenuPlayerController.h"

ANidsMenuGameMode::ANidsMenuGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	PlayerControllerClass = ANidsMenuPlayerController::StaticClass();
	HUDClass = ANidsHUD::StaticClass();
}


