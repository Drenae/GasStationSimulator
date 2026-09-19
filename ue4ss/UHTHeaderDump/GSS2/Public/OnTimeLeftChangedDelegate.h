#pragma once
#include "CoreMinimal.h"
#include "OnTimeLeftChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTimeLeftChanged, float, TimeLeft);

