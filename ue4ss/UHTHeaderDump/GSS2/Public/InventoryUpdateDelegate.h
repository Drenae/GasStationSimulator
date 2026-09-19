#pragma once
#include "CoreMinimal.h"
#include "InventoryUpdateDelegate.generated.h"

class UInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryUpdate, const UInventoryComponent*, Inventory);

