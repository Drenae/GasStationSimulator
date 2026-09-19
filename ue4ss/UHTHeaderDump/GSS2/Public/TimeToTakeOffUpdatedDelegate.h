#pragma once
#include "CoreMinimal.h"
#include "TimeToTakeOffUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTimeToTakeOffUpdated, const int32, TimeUpdated);

