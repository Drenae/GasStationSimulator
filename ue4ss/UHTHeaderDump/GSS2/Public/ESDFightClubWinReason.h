#pragma once
#include "CoreMinimal.h"
#include "ESDFightClubWinReason.generated.h"

UENUM(BlueprintType)
enum class ESDFightClubWinReason : uint8 {
    None,
    EnemyKnockOut,
    JudgesPoints,
    MAX,
};

