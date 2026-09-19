#pragma once
#include "CoreMinimal.h"
#include "EEmployeeTask.generated.h"

UENUM(BlueprintType)
enum class EEmployeeTask : uint8 {
    CLEANING,
    CASH_REGISTER,
    FUEL,
    GARAGE,
    ICE_CREAM_VENDING,
    BOAT_FUEL,
    CINEMA,
    HOME,
    WAIT,
    RESTOCK,
    BARMAN,
    SERVER,
    BARBACK,
    COOK,
    MAX,
};

