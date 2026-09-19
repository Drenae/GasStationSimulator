#pragma once
#include "CoreMinimal.h"
#include "EJunkyardDecalPossibility.generated.h"

UENUM(BlueprintType)
enum class EJunkyardDecalPossibility : uint8 {
    PAINTABLE,
    RUSTY,
    NOTPAINTABLE,
    MISSINGPARTS,
    NOTONPLATFORM,
    MAX,
};

