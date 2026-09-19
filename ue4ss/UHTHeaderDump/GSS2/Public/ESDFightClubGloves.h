#pragma once
#include "CoreMinimal.h"
#include "ESDFightClubGloves.generated.h"

UENUM(BlueprintType)
enum class ESDFightClubGloves : uint8 {
    DefaultGloves,
    ReducedPadding,
    GravelPadding,
    BuckshotFilled,
    Horseshoe,
    MAX,
};

