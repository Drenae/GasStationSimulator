#pragma once
#include "CoreMinimal.h"
#include "OnRVTrustPointsUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRVTrustPointsUpdated, int32, CurrentTrustPoints, int32, Difference);

