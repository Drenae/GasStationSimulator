#pragma once
#include "CoreMinimal.h"
#include "TrafficImpactUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrafficImpactUpdated, const int32, UpdatedImpact);

