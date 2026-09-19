#pragma once
#include "CoreMinimal.h"
#include "EDishwashingEfficiency.h"
#include "WaterFlowDurationUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FWaterFlowDurationUpdated, float, Duration, float, MaxDuration, EDishwashingEfficiency, Efficiency);

