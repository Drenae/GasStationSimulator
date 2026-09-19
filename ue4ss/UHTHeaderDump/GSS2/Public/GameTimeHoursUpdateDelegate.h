#pragma once
#include "CoreMinimal.h"
#include "GameTimeHoursUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameTimeHoursUpdate, const int32, UpdatedTime);

