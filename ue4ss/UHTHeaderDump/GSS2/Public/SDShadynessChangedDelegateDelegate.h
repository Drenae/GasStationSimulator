#pragma once
#include "CoreMinimal.h"
#include "SDShadynessChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSDShadynessChangedDelegate, float, PreviousValue, float, NewValue);

