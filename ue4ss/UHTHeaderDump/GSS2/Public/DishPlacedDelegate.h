#pragma once
#include "CoreMinimal.h"
#include "DishPlacedDelegate.generated.h"

class ADishItem;
class ADishesStack;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDishPlaced, ADishesStack*, DishesStack, ADishItem*, Dish);

