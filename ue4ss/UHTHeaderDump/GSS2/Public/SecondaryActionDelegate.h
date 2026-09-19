#pragma once
#include "CoreMinimal.h"
#include "SecondaryActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSecondaryAction, bool, bIsPressed);

