#pragma once
#include "CoreMinimal.h"
#include "VehicleFinishTraceDelegate.generated.h"

class AGSSWheeledVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVehicleFinishTrace, AGSSWheeledVehicle*, GSSWheeledVehicle);

