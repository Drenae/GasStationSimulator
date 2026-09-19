#pragma once
#include "CoreMinimal.h"
#include "ECountryRegion.generated.h"

UENUM(BlueprintType)
enum class ECountryRegion : uint8 {
    LATIN_AMERICA,
    EUROPE,
    ALL,
    NONE,
};

