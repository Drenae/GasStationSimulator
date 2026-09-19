#pragma once
#include "CoreMinimal.h"
#include "EShelveSortType.generated.h"

UENUM(BlueprintType)
enum class EShelveSortType : uint8 {
    NOT_SORTED,
    QUANTITY_ASCENDING,
    QUANTITY_DESCENDING,
};

