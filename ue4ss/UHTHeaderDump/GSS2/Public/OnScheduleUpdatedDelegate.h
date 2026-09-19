#pragma once
#include "CoreMinimal.h"
#include "PlaneEntry.h"
#include "OnScheduleUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScheduleUpdated, const TArray<FPlaneEntry>&, Schedule);

