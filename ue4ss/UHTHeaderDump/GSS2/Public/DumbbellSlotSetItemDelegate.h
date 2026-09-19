#pragma once
#include "CoreMinimal.h"
#include "DumbbellSlotSetItemDelegate.generated.h"

class ADumbbellItem;
class UDumbbellSlotComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDumbbellSlotSetItem, UDumbbellSlotComponent*, Slot, ADumbbellItem*, Item);

