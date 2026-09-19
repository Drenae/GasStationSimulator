#pragma once
#include "CoreMinimal.h"
#include "EOrdersType.generated.h"

UENUM(BlueprintType)
enum class EOrdersType : uint8 {
    OrderProducts,
    OrdersCarParts,
    OrdersIceCream,
};

