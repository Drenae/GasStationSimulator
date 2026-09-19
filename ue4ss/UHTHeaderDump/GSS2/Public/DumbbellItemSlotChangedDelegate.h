#pragma once
#include "CoreMinimal.h"
#include "DumbbellItemSlotChangedDelegate.generated.h"

class UDumbbellSlotComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDumbbellItemSlotChanged, UDumbbellSlotComponent*, Slot);

