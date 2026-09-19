#pragma once
#include "CoreMinimal.h"
#include "MoveRightActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMoveRightAction, float, Val);

