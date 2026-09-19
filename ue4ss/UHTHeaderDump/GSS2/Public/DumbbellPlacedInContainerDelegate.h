#pragma once
#include "CoreMinimal.h"
#include "DumbbellPlacedInContainerDelegate.generated.h"

class ADumbbellItem;
class ADumbbellsContainer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDumbbellPlacedInContainer, ADumbbellItem*, Item, ADumbbellsContainer*, Container);

