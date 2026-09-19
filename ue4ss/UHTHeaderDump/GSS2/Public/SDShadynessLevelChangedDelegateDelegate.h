#pragma once
#include "CoreMinimal.h"
#include "SDShadynessLevelChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSDShadynessLevelChangedDelegate, int32, OldLevel, int32, NewLevel);

