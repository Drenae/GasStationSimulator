#pragma once
#include "CoreMinimal.h"
#include "OnCarWashPressureUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCarWashPressureUpdated, float, NewValue);

