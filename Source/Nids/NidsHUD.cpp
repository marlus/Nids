

#include "Nids.h"
#include "NidsHUD.h"

#include "CoherentUIPluginClasses.h"

#include "Coherent/UI/ViewInfo.h"
#include "Coherent/UI/View.h"

#include "Coherent/UI/Binding/EventHandler.h"
#include "CoherentFStringBinder.h"


ANidsHUD::ANidsHUD(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	CoherentUIHUD = PCIP.CreateDefaultSubobject<UCoherentUIHUD>(this, TEXT("CoherentMenuUIHUD"));
}

void ANidsHUD::DrawHUD()
{
	Super::DrawHUD();

	if (CoherentUIHUD)
	{
		if (CoherentUIHUD->IsReadyToCreateView() && !CoherentUIHUD->HasRequestedView())
		{
			CreateView();
		}

		// check that the size matches
		auto View = CoherentUIHUD->GetView();
		if (View)
		{
			if (View->GetWidth() != Canvas->ClipX || View->GetHeight() != Canvas->ClipY)
			{
				CoherentUIHUD->Resize(Canvas->ClipX, Canvas->ClipY);
			}
		}
		CoherentUIHUD->DrawHUD(Canvas, 0, 0);
	}
}

void ANidsHUD::CreateView()
{
	Coherent::UI::ViewInfo info;
	info.Width = Canvas->ClipX;
	info.Height = Canvas->ClipY;
	info.TargetFrameRate = 60;
	info.UsesSharedMemory = true;
	info.IsTransparent = true;
	info.SupportClickThrough = true;

	CoherentUIHUD->ReadyForBindings.AddDynamic(this, &ANidsHUD::BindUI);
	CoherentUIHUD->CreateHUDView(info, TEXT("coui://UIResources/Menu/menu.html"));

	CalledFromJSSampleDelegate.BindUObject(this, &ANidsHUD::CalledFromJSHandler);
}

UCoherentUIHUD* ANidsHUD::GetCoherentUIHUD() const
{
	return CoherentUIHUD;
}

void ANidsHUD::BindUI(int32 frameid, const FString &path, bool isMain)
{
	CoherentUIHUD->GetView()->BindCall("CallFromJavaScript", 
		Coherent::UI::MakeHandler(&CalledFromJSSampleDelegate, &FCalledFromJSSample::ExecuteIfBound));
	CoherentUIHUD->GetView()->BindCall("CalledFromJSString", 
		Coherent::UI::MakeHandler(this, &ANidsHUD::CalledFromJSStringHandler));

	CoherentUIHUD->GetView()->RegisterForEvent("onStartGame", Coherent::UI::MakeHandler(this, &ANidsHUD::OnStartGame));
	CoherentUIHUD->GetView()->RegisterForEvent("onQuit", Coherent::UI::MakeHandler(this, &ANidsHUD::OnQuit));
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
