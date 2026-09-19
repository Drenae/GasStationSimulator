#pragma once
#include "CoreMinimal.h"
#include "LeftTriggerActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLeftTriggerAction, bool, bIsPressed);

