
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

	UFUNCTION()
	void BindUI(int32 frameid, const FString& path, bool isMain);

	//Sample Delegate that shows how to bind js functions
	//with parameters
	DECLARE_DELEGATE_OneParam(FCalledFromJSSample, int32);
	FCalledFromJSSample CalledFromJSSampleDelegate;

	void CalledFromJSHandler(int32 number);
	void CalledFromJSStringHandler(const FString& str);

	void OnStartGame();
	void OnQuit();

private:
	void CreateView();

	UPROPERTY(VisibleDefaultsOnly, Category = HUD)
	TSubobjectPtr<UCoherentUIHUD> CoherentUIHUD;
};
