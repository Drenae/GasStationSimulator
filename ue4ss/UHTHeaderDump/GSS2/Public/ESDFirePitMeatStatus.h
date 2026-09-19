#pragma once
#include "CoreMinimal.h"
#include "ESDFirePitMeatStatus.generated.h"

UENUM(BlueprintType)
enum class ESDFirePitMeatStatus : uint8 {
    None,
    Raw,
    Cooked,
    Burnt,
    MAX,
};

