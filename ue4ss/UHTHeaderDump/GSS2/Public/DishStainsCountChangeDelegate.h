#pragma once
#include "CoreMinimal.h"
#include "DishStainsCountChangeDelegate.generated.h"

class ADishItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDishStainsCountChange, ADishItem*, Dish, int32, Change);

