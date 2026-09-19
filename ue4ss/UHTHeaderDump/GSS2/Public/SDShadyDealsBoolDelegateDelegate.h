#pragma once
#include "CoreMinimal.h"
#include "SDShadyDealsBoolDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSDShadyDealsBoolDelegate, bool, bValue);

