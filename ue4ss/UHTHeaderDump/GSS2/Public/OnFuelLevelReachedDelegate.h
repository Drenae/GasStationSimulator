#pragma once
#include "CoreMinimal.h"
#include "OnFuelLevelReachedDelegate.generated.h"

class AGSSWheeledVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnFuelLevelReached, AGSSWheeledVehicle*, PlayerVehicle, float, CurrentFuel, bool, bInGasStation);

