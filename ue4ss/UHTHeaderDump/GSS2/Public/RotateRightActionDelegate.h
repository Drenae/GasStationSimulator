#pragma once
#include "CoreMinimal.h"
#include "RotateRightActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRotateRightAction, bool, bIsPressed);

