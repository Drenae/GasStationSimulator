#pragma once
#include "CoreMinimal.h"
#include "StainsCountChangeDelegate.generated.h"

class ADishItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStainsCountChange, ADishItem*, Dish, int32, Change);

