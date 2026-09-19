#pragma once
#include "CoreMinimal.h"
#include "RightTriggerActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRightTriggerAction, bool, bIsPressed);

