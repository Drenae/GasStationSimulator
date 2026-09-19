#pragma once
#include "CoreMinimal.h"
#include "PlayerVehicleLookUpDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerVehicleLookUp, float, Value);

