#pragma once
#include "CoreMinimal.h"
#include "EEmployeeSkill.generated.h"

UENUM(BlueprintType)
enum class EEmployeeSkill : uint8 {
    Cleaning,
    Shop,
    Fuel,
    Garage,
    Ice_Cream_Vending,
    Cinema,
    Restock,
    None,
    Barman,
    Server,
    Cook,
};

