#pragma once
#include "CoreMinimal.h"
#include "OnAutopayUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAutopayUpdated, const bool, IsAutopayEnabled);

