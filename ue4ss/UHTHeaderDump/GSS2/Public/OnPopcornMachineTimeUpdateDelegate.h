#pragma once
#include "CoreMinimal.h"
#include "OnPopcornMachineTimeUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPopcornMachineTimeUpdate, float, NewTime);

