#pragma once
#include "CoreMinimal.h"
#include "SDPlacementTriggerProductDelegateDelegate.generated.h"

class AProduct;
class USDPlacementBoxTrigger;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSDPlacementTriggerProductDelegate, USDPlacementBoxTrigger*, Trigger, AProduct*, Product);

