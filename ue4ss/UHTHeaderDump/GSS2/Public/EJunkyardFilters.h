#pragma once
#include "CoreMinimal.h"
#include "EJunkyardFilters.generated.h"

UENUM(BlueprintType)
enum class EJunkyardFilters : uint8 {
    All,
    FrontBumper,
    RearBumper,
    Doors,
    Hood,
    Rims,
    Spoiler,
    Exhaust,
    Mirrors,
    Engine,
    Turbo,
};

