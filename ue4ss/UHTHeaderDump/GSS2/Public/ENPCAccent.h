#pragma once
#include "CoreMinimal.h"
#include "ENPCAccent.generated.h"

UENUM(BlueprintType)
enum class ENPCAccent : uint8 {
    AMERICAN,
    AUSTRALIAN,
    BRITISH,
    FRENCH,
    EASTERN_EUROPEAN,
    PORTUGESE,
    SPANISH,
    MAX,
};

