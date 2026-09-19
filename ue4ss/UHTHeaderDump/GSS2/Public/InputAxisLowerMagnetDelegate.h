#pragma once
#include "CoreMinimal.h"
#include "InputAxisLowerMagnetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInputAxisLowerMagnet, float, Value, bool, LimitReached);

