#pragma once
#include "CoreMinimal.h"
#include "EPriceBoardInteractionType.generated.h"

UENUM(BlueprintType)
enum class EPriceBoardInteractionType : uint8 {
    FromWorld,
    FromPC,
    MAX,
};

