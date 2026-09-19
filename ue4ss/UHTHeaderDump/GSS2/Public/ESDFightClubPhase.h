#pragma once
#include "CoreMinimal.h"
#include "ESDFightClubPhase.generated.h"

UENUM(BlueprintType)
enum class ESDFightClubPhase : uint8 {
    None,
    Training,
    Fight,
    MAX,
};

