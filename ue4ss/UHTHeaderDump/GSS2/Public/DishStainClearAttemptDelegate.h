#pragma once
#include "CoreMinimal.h"
#include "DishStainClearAttemptDelegate.generated.h"

class ADishItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDishStainClearAttempt, ADishItem*, Dish, int32, Amount);

