#pragma once
#include "CoreMinimal.h"
#include "EMoneyType.generated.h"

UENUM(BlueprintType)
enum class EMoneyType : uint8 {
    Normal,
    Fuel,
    Cash,
    Garage,
};

