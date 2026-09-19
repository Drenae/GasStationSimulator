#pragma once
#include "CoreMinimal.h"
#include "DumbbellGriffinWeightChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDumbbellGriffinWeightChanged, float, NewWeight);

