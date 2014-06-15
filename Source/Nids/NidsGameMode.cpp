#include "Nids.h"
#include "NidsGameMode.h"
#include "NidsGameHUD.h"

ANidsGameMode::ANidsGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	HUDClass = ANidsGameHUD::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FObjectFinder<UClass> PlayerPawnBPClass(TEXT("Class'/Game/Characters/Nids/NidsCharacterBP.NidsCharacterBP_C'"));
	if (PlayerPawnBPClass.Object != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Object;
	}
}


