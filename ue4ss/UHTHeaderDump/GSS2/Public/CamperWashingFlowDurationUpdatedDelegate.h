#pragma once
#include "CoreMinimal.h"
#include "ECamperWashingEfficiency.h"
#include "CamperWashingFlowDurationUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCamperWashingFlowDurationUpdated, float, Duration, float, MaxDuration, ECamperWashingEfficiency, Efficiency);

