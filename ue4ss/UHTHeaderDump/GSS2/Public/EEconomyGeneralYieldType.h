#pragma once
#include "CoreMinimal.h"
#include "EEconomyGeneralYieldType.generated.h"

UENUM(BlueprintType)
enum class EEconomyGeneralYieldType : uint8 {
    REVENUE,
    COST,
    NOT_RELEVANT,
    MAX,
};

