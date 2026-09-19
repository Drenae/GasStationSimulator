#pragma once
#include "CoreMinimal.h"
#include "OnHoldInteractionStartDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHoldInteractionStart, float, TimeToHold);

