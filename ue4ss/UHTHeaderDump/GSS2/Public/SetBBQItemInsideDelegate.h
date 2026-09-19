#pragma once
#include "CoreMinimal.h"
#include "SetBBQItemInsideDelegate.generated.h"

class ABBQItem;
class UBBQSlotComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSetBBQItemInside, UBBQSlotComponent*, Slot, ABBQItem*, BBQItem);

