#pragma once
#include "CoreMinimal.h"
#include "OnPopcornMachineCapacityUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPopcornMachineCapacityUpdate, int32, NewCapacity);

