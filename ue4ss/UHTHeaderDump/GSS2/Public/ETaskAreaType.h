#pragma once
#include "CoreMinimal.h"
#include "ETaskAreaType.generated.h"

UENUM(BlueprintType)
enum class ETaskAreaType : uint8 {
    None,
    GasStation,
    Restauration,
};

