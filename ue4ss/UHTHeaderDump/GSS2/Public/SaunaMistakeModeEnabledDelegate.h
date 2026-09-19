#pragma once
#include "CoreMinimal.h"
#include "SaunaMistakeModeEnabledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSaunaMistakeModeEnabled, bool, bEnabled, float, TimeLeft);

