

#pragma once

#include "GameFramework/PlayerController.h"
#include "NidsMenuPlayerController.generated.h"

UCLASS()
class ANidsMenuPlayerController : public APlayerController
{
	GENERATED_UCLASS_BODY()

public:

	// Begin Controller interface
	/** We know we won't have a pawn, so we don't care */
	virtual void FailedToSpawnPawn() OVERRIDE{}
	// End Controller interface

	// handle mouse down
	UFUNCTION()
	void MouseDown();

	// handle mouse up
	UFUNCTION()
	void MouseUp();

	// handle mouse move
	void MouseMove(float Val);

protected:
	virtual void SetupInputComponent() OVERRIDE;

	
	
};
