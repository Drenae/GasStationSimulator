#pragma once
#include "CoreMinimal.h"
#include "ESortType.generated.h"

UENUM(BlueprintType)
enum class ESortType : uint8 {
    ALPHABETICAL,
    TYPE,
    NEWEST,
    PRICE_ASCENDING,
    PRICE_DESCENDING,
    QUANTITY_ASCENDING,
    QUANTITY_DESCENDING,
    FAVOURITES,
};

