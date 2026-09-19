#pragma once
#include "CoreMinimal.h"
#include "EJunkyardSortings.generated.h"

UENUM(BlueprintType)
enum class EJunkyardSortings : uint8 {
    Alphabetical,
    Alphabetical_Descending,
    Tiers_Ascending,
    Tiers_Descending,
};

