#pragma once
#include "CoreMinimal.h"
#include "EChunchumanchuAnger.h"
#include "OnChunchumanchuAngerChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnChunchumanchuAngerChange, EChunchumanchuAnger, AngerState, const float, Value, const float, ValueChanged);

