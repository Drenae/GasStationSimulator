#pragma once
#include "CoreMinimal.h"
#include "ENPMapStatusChanged.generated.h"

UENUM(BlueprintType)
enum class ENPMapStatusChanged : uint8 {
    Loaded,
    UnLoaded,
    Show,
    Hidden,
};

