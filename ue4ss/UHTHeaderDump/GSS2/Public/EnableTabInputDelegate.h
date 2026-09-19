#pragma once
#include "CoreMinimal.h"
#include "EnableTabInputDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnableTabInput, const bool, Enable);

