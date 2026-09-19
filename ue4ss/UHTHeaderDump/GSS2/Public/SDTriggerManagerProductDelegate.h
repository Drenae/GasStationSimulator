#pragma once
#include "CoreMinimal.h"
#include "SDTriggerManagerProductDelegate.generated.h"

class AProduct;
class USDPlacementBoxTrigger;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSDTriggerManagerProduct, USDPlacementBoxTrigger*, Trigger, AProduct*, Product);

