#pragma once
#include "CoreMinimal.h"
#include "OnItemPlacedDelegate.generated.h"

class APicnicProduct;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemPlaced, APicnicProduct*, Product);

