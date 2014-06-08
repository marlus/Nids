
#include "Nids.h"
#include "NidsMenuPlayerController.h"

#include "NidsHUD.h"

#include "CoherentUIPluginClasses.h"

#include "Coherent/UI/ViewInfo.h"
#include "Coherent/UI/View.h"

#include "CoherentUIPlugin/Classes/CoherentUIComponent.h"
#include "Coherent/UI/InputEvents.h"


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

static void MouseEvent(ANidsMenuPlayerController* controller,
	Coherent::UI::MouseEventData::EventType type,
	Coherent::UI::MouseEventData::MouseButton button)
{
	ULocalPlayer* Player = Cast<ULocalPlayer>(Cast<APlayerController>(controller)->Player);

	AHUD* BaseHUD = controller->GetHUD();
	ANidsHUD* LevelHud = Cast<ANidsHUD>(BaseHUD);

	FVector2D MousePos;
	MousePos = Player->ViewportClient->GetMousePosition();

	Coherent::UI::MouseEventData MouseEvent;
	MouseEvent.Type = type;
	MouseEvent.Button = button;
	MouseEvent.WheelX = 0;
	MouseEvent.WheelY = 0;
	MouseEvent.X = MousePos.X;
	MouseEvent.Y = MousePos.Y;

	if (LevelHud)
	{
		auto View = LevelHud->GetCoherentUIHUD()->GetView();

		if (View)
		{
			View->SetFocus();
			View->MouseEvent(MouseEvent);
		}
	}
}

void ANidsMenuPlayerController::MouseDown()
{
	MouseEvent(this, Coherent::UI::MouseEventData::MouseDown, Coherent::UI::MouseEventData::ButtonLeft);
}

void ANidsMenuPlayerController::MouseUp()
{
	MouseEvent(this, Coherent::UI::MouseEventData::MouseUp, Coherent::UI::MouseEventData::ButtonLeft);
}

void ANidsMenuPlayerController::MouseMove(float Val)
{
	MouseEvent(this, Coherent::UI::MouseEventData::MouseMove, Coherent::UI::MouseEventData::ButtonNone);
}