#pragma once
#include "CoreMinimal.h"
#include "PlayerVehicleInteractionFDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerVehicleInteractionF, bool, bIsPressed);

