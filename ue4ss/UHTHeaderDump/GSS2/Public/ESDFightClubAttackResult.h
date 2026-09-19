#pragma once
#include "CoreMinimal.h"
#include "ESDFightClubAttackResult.generated.h"

UENUM(BlueprintType)
enum class ESDFightClubAttackResult : uint8 {
    DamageDealt,
    DamageNegated,
    DamageAvoided,
    KnockOut,
    MAX,
};

