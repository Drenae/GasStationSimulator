#pragma once
#include "CoreMinimal.h"
#include "ElectricityEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElectricityEvent, bool, bOn);

