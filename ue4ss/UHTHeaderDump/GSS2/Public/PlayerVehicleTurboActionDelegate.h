#pragma once
#include "CoreMinimal.h"
#include "PlayerVehicleTurboActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerVehicleTurboAction, bool, bIsPressed);

