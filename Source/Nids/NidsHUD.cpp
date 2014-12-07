

#include "Nids.h"
#include "NidsHUD.h"



ANidsHUD::ANidsHUD(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
}

void ANidsHUD::DrawHUD()
{
	Super::DrawHUD();
}

void ANidsHUD::CreateView()
{

}


void ANidsHUD::BindUI(int32 frameid, const FString &path, bool isMain)
{

}

void ANidsHUD::OnStartGame()
{
	ULocalPlayer* Player = GEngine->GetGamePlayer(GetWorld(), 0);
	if (Player != NULL)
	{
		APlayerController* PlayerController = Player->PlayerController;
		if (PlayerController)
		{
			PlayerController->LocalTravel("Game");
		}
	}
}

void ANidsHUD::OnQuit()
{
	ULocalPlayer* Player = GEngine->GetGamePlayer(GetWorld(), 0);

	APlayerController* PlayerController = Player->PlayerController;
	if (PlayerController)
	{
		PlayerController->ConsoleCommand("quit");
	}
}

void ANidsHUD::CalledFromJSHandler(int32 number)
{
	UE_LOG(LogScript, Log, TEXT("UE4 Delegate called from JavaScript"));
}

void ANidsHUD::CalledFromJSStringHandler(const FString& str)
{
	UE_LOG(LogScript, Log, TEXT("String revceived from JS: %s"), *str);
}
