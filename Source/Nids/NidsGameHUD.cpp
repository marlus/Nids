#include "Nids.h"
#include "NidsGameHUD.h"

ANidsGameHUD::ANidsGameHUD(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	// Set the crosshair texture
	static ConstructorHelpers::FObjectFinder<UTexture2D> CrosshiarTexObj(TEXT("/Game/Textures/Crosshair"));
	CrosshairTex = CrosshiarTexObj.Object;

	//CoherentUIHUD = PCIP.CreateDefaultSubobject<UCoherentUIHUD>(this, TEXT("CoherentUIHUD"));
}

void ANidsGameHUD::DrawHUD()
{
	Super::DrawHUD();
}

void ANidsGameHUD::CreateView()
{

}

void ANidsGameHUD::BindUI(int32 frameid, const FString& path, bool isMain)
{

}

void ANidsGameHUD::OnMainMenu()
{
	ULocalPlayer* player = GEngine->GetGamePlayer(GetWorld(), 0);
	if (player != NULL)
	{
		APlayerController* pc = player->PlayerController;
		if (pc)
		{
			pc->LocalTravel("Menu");
		}
	}
}

void ANidsGameHUD::OnQuit()
{
	ULocalPlayer* player = GEngine->GetGamePlayer(GetWorld(), 0);

	APlayerController* pc = player->PlayerController;
	if (pc)
	{
		pc->ConsoleCommand("quit");
	}
}

void ANidsGameHUD::CalledFromJSHandler(int32 number)
{
	UE_LOG(LogScript, Log, TEXT("UE4 Delegate called from JavaScript"));
}

void ANidsGameHUD::CalledFromJSStringHandler(const FString& str)
{
	UE_LOG(LogScript, Log, TEXT("String revceived from JS: %s"), *str);
}
