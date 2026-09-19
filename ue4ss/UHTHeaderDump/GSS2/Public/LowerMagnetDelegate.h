#pragma once
#include "CoreMinimal.h"
#include "LowerMagnetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLowerMagnet, float, Value);

