#pragma once
#include "CoreMinimal.h"
#include "EFuelState.generated.h"

UENUM(BlueprintType)
enum class EFuelState : uint8 {
    IsOk,
    NoOk,
    NoFuel,
};

