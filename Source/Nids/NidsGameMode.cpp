#include "Nids.h"
#include "NidsGameMode.h"
#include "NidsGameHUD.h"

ANidsGameMode::ANidsGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	HUDClass = ANidsGameHUD::StaticClass();
}


