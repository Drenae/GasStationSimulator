#pragma once
#include "CoreMinimal.h"
#include "EDishPlacementResult.h"
#include "DishPlaceFailedDelegate.generated.h"

class ADishItem;
class ADishesStack;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDishPlaceFailed, ADishesStack*, DishesStack, ADishItem*, Dish, EDishPlacementResult, ResultInfo);

