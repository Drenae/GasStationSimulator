#pragma once
#include "CoreMinimal.h"
#include "EInventoryType.generated.h"

UENUM(BlueprintType)
enum class EInventoryType : uint8 {
    ITEM_INVENTORY,
    AIRSTRIP_INVENTORY,
    MAX,
};

