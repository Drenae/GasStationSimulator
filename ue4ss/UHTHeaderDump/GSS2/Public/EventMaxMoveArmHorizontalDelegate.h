#pragma once
#include "CoreMinimal.h"
#include "EventMaxMoveArmHorizontalDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventMaxMoveArmHorizontal, bool, bMaxPlatformElevate);

