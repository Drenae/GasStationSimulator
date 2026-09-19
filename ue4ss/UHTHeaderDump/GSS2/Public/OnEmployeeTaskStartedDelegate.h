#pragma once
#include "CoreMinimal.h"
#include "OnEmployeeTaskStartedDelegate.generated.h"

class UTaskBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEmployeeTaskStarted, TSoftClassPtr<UTaskBase>, StartedTask);

