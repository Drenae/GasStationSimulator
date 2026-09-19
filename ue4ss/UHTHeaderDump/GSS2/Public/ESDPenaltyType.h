#pragma once
#include "CoreMinimal.h"
#include "ESDPenaltyType.generated.h"

UENUM(BlueprintType)
enum class ESDPenaltyType : uint8 {
    LastDayIncomePercent,
    FixedPenalty,
    MAX,
};

