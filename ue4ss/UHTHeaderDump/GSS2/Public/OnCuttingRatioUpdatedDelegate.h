#pragma once
#include "CoreMinimal.h"
#include "OnCuttingRatioUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCuttingRatioUpdated, float, FirstRatio, float, SecondRatio);

