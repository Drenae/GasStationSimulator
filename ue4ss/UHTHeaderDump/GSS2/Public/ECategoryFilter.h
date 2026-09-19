#pragma once
#include "CoreMinimal.h"
#include "ECategoryFilter.generated.h"

UENUM(BlueprintType)
enum class ECategoryFilter : uint8 {
    DECORATIONS,
    SHELVES,
    PRODUCTS,
    CAR_PARTS,
    KEY_ITEMS,
    ICE_CREAMS,
    RENTAL_EQUIPMENT,
    None,
};

