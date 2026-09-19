#pragma once
#include "CoreMinimal.h"
#include "TimeStruct.h"
#include "OnCurrentStayTimeUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCurrentStayTimeUpdated, const FTimeStruct, CurrentStayTime);

