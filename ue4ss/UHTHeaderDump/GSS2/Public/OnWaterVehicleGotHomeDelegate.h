#pragma once
#include "CoreMinimal.h"
#include "OnWaterVehicleGotHomeDelegate.generated.h"

class AWaterVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWaterVehicleGotHome, AWaterVehicle*, WaterVehicle);

