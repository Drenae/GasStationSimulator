#pragma once
#include "CoreMinimal.h"
#include "OnWaterVehicleArrivedSignatureDelegate.generated.h"

class AWaterVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWaterVehicleArrivedSignature, AWaterVehicle*, WaterVehicle);

