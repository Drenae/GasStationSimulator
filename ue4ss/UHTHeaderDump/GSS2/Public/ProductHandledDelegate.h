#pragma once
#include "CoreMinimal.h"
#include "ProductHandledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FProductHandled, bool, bSuccess);

