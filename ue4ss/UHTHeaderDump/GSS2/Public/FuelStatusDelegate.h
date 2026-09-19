#pragma once
#include "CoreMinimal.h"
#include "EFuelState.h"
#include "FuelStatusDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFuelStatus, const EFuelState, FuelStatusEnum);

