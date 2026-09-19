#pragma once
#include "CoreMinimal.h"
#include "MoveArmHorizontalDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMoveArmHorizontal, float, Value);

