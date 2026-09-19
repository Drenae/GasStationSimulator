#pragma once
#include "CoreMinimal.h"
#include "ECustomizationContractType.generated.h"

UENUM(BlueprintType)
enum class ECustomizationContractType : uint8 {
    REGULAR,
    VIP,
    RACE,
    DESTRUCTION_DERBY,
    DRIFT_FESTIVAL,
    CAR_STUNT_SHOW,
    VIP_PLUS,
    REGULAR_PLUS,
    NEW_PLUS,
    MAX,
};

