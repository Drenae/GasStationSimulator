#pragma once
#include "CoreMinimal.h"
#include "WetStateChangedDelegate.generated.h"

class ADishItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWetStateChanged, ADishItem*, Dish, bool, bNewWet);

