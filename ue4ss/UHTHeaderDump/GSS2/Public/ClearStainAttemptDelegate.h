#pragma once
#include "CoreMinimal.h"
#include "ClearStainAttemptDelegate.generated.h"

class ADishItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FClearStainAttempt, ADishItem*, Dish, int32, Amount);

