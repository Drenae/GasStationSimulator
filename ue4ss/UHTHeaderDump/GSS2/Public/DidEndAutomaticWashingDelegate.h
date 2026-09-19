#pragma once
#include "CoreMinimal.h"
#include "ETaskResult.h"
#include "DidEndAutomaticWashingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDidEndAutomaticWashing, ETaskResult, TaskResultValue);

