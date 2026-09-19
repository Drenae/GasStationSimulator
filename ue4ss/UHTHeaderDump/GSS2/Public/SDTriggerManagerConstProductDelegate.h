#pragma once
#include "CoreMinimal.h"
#include "SDTriggerManagerConstProductDelegate.generated.h"

class AProduct;
class USDPlacementBoxTrigger;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSDTriggerManagerConstProduct, USDPlacementBoxTrigger*, Trigger, const AProduct*, Product);

