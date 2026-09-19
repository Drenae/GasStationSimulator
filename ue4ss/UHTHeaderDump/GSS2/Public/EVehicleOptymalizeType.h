#pragma once
#include "CoreMinimal.h"
#include "EVehicleOptymalizeType.generated.h"

UENUM(BlueprintType)
enum class EVehicleOptymalizeType : uint8 {
    Default,
    Fuel,
    Repair,
    CarWash,
};

