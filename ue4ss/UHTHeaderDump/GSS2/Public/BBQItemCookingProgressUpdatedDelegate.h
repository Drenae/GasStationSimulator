#pragma once
#include "CoreMinimal.h"
#include "BBQItemCookingProgressUpdatedDelegate.generated.h"

class ABBQItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBBQItemCookingProgressUpdated, ABBQItem*, Item, float, CookingProgress, float, CurrentStateProgress);

