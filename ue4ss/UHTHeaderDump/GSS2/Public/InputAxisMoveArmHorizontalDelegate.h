#pragma once
#include "CoreMinimal.h"
#include "InputAxisMoveArmHorizontalDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInputAxisMoveArmHorizontal, float, Value, bool, LimitReached);

