#pragma once
#include "CoreMinimal.h"
#include "ECountryOfOrigin.generated.h"

UENUM(BlueprintType)
enum class ECountryOfOrigin : uint8 {
    NONE,
    Mexico,
    Cuba,
    Brazil,
    Canada,
    Argentina,
    Bolivia,
    Colombia,
    Uruguay,
    PuertoRico,
    Venezuela,
    GreatBritain,
    Germany,
    Australia,
    Poland,
    Netherlands,
    France,
    MAX,
};

