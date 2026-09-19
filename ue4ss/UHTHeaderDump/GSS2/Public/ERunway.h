#pragma once
#include "CoreMinimal.h"
#include "ERunway.generated.h"

UENUM(BlueprintType)
enum class ERunway : uint8 {
    MiddleStrip,
    ThirdStrip,
    MAX,
};

