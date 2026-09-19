#pragma once
#include "CoreMinimal.h"
#include "OnWaterPointReservedDelegate.generated.h"

class AWaterMovementPoint;
class AWaterVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWaterPointReserved, AWaterVehicle*, WaterVehicle, AWaterMovementPoint*, WaterMovementPoint);

