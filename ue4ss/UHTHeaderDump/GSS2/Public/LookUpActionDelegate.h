#pragma once
#include "CoreMinimal.h"
#include "LookUpActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLookUpAction, float, Val);

