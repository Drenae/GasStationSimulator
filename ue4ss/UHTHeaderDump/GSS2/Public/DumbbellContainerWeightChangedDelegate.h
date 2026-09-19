#pragma once
#include "CoreMinimal.h"
#include "DumbbellContainerWeightChangedDelegate.generated.h"

class ADumbbellsContainer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDumbbellContainerWeightChanged, ADumbbellsContainer*, Container, float, NewWeight);

