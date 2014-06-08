

#include "Nids.h"
#include "NidsHUD.h"

#include "CoherentUIPluginClasses.h"

#include "Coherent/UI/ViewInfo.h"
#include "Coherent/UI/View.h"


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

	CoherentUIHUD->CreateHUDView(info, TEXT("coui://UIResources/Menu/menu.html"));
}
