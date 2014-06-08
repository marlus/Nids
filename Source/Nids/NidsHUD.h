
#pragma once

#include "GameFramework/HUD.h"
#include "NidsHUD.generated.h"

class UCoherentUIHUD;

UCLASS()
class ANidsHUD : public AHUD
{
	GENERATED_UCLASS_BODY()

public:
	/** Primary draw call for the HUD */
	virtual void DrawHUD() OVERRIDE;

	/** Obtains a pointer to the underlying Coherent UI HUD */
	class UCoherentUIHUD* GetCoherentUIHUD() const;

private:
	void CreateView();

	UPROPERTY(VisibleDefaultsOnly, Category = HUD)
	TSubobjectPtr<UCoherentUIHUD> CoherentUIHUD;
};
