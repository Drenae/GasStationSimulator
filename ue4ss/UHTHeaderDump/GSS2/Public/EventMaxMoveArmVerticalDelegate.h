#pragma once
#include "CoreMinimal.h"
#include "EventMaxMoveArmVerticalDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventMaxMoveArmVertical, bool, bMaxPlatformMove);

