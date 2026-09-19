#pragma once
#include "CoreMinimal.h"
#include "EJoeOrderType.generated.h"

UENUM(BlueprintType)
enum class EJoeOrderType : uint8 {
    BLUEPRINT,
    MONEY,
    MAX,
};

