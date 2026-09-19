#pragma once
#include "CoreMinimal.h"
#include "InputAxisMoveArmVerticalDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInputAxisMoveArmVertical, float, Value, bool, LimitReached);

