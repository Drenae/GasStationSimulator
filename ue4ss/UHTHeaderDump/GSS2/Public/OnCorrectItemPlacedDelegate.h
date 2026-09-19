#pragma once
#include "CoreMinimal.h"
#include "OnCorrectItemPlacedDelegate.generated.h"

class APicnicProduct;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCorrectItemPlaced, APicnicProduct*, Product);

