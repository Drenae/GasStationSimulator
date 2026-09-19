#pragma once
#include "CoreMinimal.h"
#include "BPNodeOutputPinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBPNodeOutputPin, int32, FibonacciNumber);

