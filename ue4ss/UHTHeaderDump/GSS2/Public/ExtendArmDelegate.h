#pragma once
#include "CoreMinimal.h"
#include "ExtendArmDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FExtendArm, float, Value);

