#include "Nids.h"
#include "NidsGameHUD.h"

#include "CoherentUIPluginClasses.h"

#include "Coherent/UI/ViewInfo.h"
#include "Coherent/UI/View.h"

#include "Coherent/UI/Binding/EventHandler.h"
#include "CoherentFStringBinder.h"

ANidsGameHUD::ANidsGameHUD(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	// Set the crosshair texture
	static ConstructorHelpers::FObjectFinder<UTexture2D> CrosshiarTexObj(TEXT("/Game/Textures/Crosshair"));
	CrosshairTex = CrosshiarTexObj.Object;

	CoherentUIHUD = PCIP.CreateDefaultSubobject<UCoherentUIHUD>(this, TEXT("CoherentUIHUD"));
}

void ANidsGameHUD::DrawHUD()
{
	Super::DrawHUD();

	// Draw very simple crosshair

	// find center of the Canvas
	const FVector2D Center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);

	// offset by half the texture's dimensions so that the center of the texture aligns with the center of the Canvas
	const FVector2D CrosshairDrawPosition((Center.X - (CrosshairTex->GetSurfaceWidth() * 0.5)),
		(Center.Y - (CrosshairTex->GetSurfaceHeight() * 0.5f)));

	// draw the crosshair
	FCanvasTileItem TileItem(CrosshairDrawPosition, CrosshairTex->Resource, FLinearColor::White);
	TileItem.BlendMode = SE_BLEND_Translucent;
	Canvas->DrawItem(TileItem);

	if (CoherentUIHUD)
	{
		if (CoherentUIHUD->IsReadyToCreateView() && !CoherentUIHUD->HasRequestedView())
		{
			CreateView();
		}
		// check that the size mathes
		auto view = CoherentUIHUD->GetView();
		if (view)
		{
			if (view->GetWidth() != Canvas->ClipX
				|| view->GetHeight() != Canvas->ClipY)
			{
				CoherentUIHUD->Resize(Canvas->ClipX, Canvas->ClipY);
			}
		}
		CoherentUIHUD->DrawHUD(Canvas, 0, 0);
	}
}

void ANidsGameHUD::CreateView()
{
	Coherent::UI::ViewInfo info;
	info.Width = Canvas->ClipX;
	info.Height = Canvas->ClipY;
	info.TargetFrameRate = 60;
	info.UsesSharedMemory = true;
	info.IsTransparent = true;
	info.SupportClickThrough = true;
	//info.IsOnDemand = true;

	CoherentUIHUD->ReadyForBindings.AddDynamic(this, &ANidsGameHUD::BindUI);
	CoherentUIHUD->CreateHUDView(info, TEXT("coui://UIResources/HUD/hud.html"));

	CalledFromJSSampleDelegate.BindUObject(this, &ANidsGameHUD::CalledFromJSHandler);
}

UCoherentUIHUD* ANidsGameHUD::GetCoherentUIHUD() const
{
	return CoherentUIHUD;
}

void ANidsGameHUD::BindUI(int32 frameid, const FString& path, bool isMain)
{
	CoherentUIHUD->GetView()->BindCall(
		"CallFromJavaScript",
		Coherent::UI::MakeHandler(&CalledFromJSSampleDelegate,
		&FCalledFromJSSample::ExecuteIfBound));
	CoherentUIHUD->GetView()->BindCall(
		"CalledFromJSString",
		Coherent::UI::MakeHandler(this,
		&ANidsGameHUD::CalledFromJSStringHandler));

	CoherentUIHUD->GetView()->RegisterForEvent(
		"onGoToMenu",
		Coherent::UI::MakeHandler(this, &ANidsGameHUD::OnMainMenu));

	CoherentUIHUD->GetView()->RegisterForEvent(
		"onQuit", Coherent::UI::MakeHandler(this, &ANidsGameHUD::OnQuit));
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
