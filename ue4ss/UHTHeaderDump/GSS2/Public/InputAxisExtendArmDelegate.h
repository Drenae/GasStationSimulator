#pragma once
#include "CoreMinimal.h"
#include "InputAxisExtendArmDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInputAxisExtendArm, float, Value, bool, LimitReached);

