#pragma once
#include "CoreMinimal.h"
#include "MoveArmVerticalDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMoveArmVertical, float, Value);

