#pragma once
#include "CoreMinimal.h"
#include "DisplaySuccessFailDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDisplaySuccessFail, bool, Success);

