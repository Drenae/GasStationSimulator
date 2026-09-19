#pragma once
#include "CoreMinimal.h"
#include "OnWaterPointFreedDelegate.generated.h"

class AWaterMovementPoint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWaterPointFreed, AWaterMovementPoint*, WaterMovementPoint);

