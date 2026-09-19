#pragma once
#include "CoreMinimal.h"
#include "MouseMoveRawYDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMouseMoveRawY, float, Val);

