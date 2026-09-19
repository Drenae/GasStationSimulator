#pragma once
#include "CoreMinimal.h"
#include "EGuestServiceLocationType.generated.h"

UENUM(BlueprintType)
enum class EGuestServiceLocationType : uint8 {
    CAMP_SPOT,
    RV_BUILDING,
    GAS_STATION,
    MAX,
};

