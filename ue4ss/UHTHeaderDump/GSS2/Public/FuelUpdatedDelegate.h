#pragma once
#include "CoreMinimal.h"
#include "FuelUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFuelUpdated, const float, CurrentFuelAmount);

