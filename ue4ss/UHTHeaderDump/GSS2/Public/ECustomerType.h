#pragma once
#include "CoreMinimal.h"
#include "ECustomerType.generated.h"

UENUM(BlueprintType)
enum class ECustomerType : uint8 {
    FUEL,
    REPAIR,
    CAR_WASH,
    SHOPPING,
    ICE_CREAM,
    SCUBA,
    WINDSURFING,
    PARTYING,
    WC,
    DRIVE_IN_CINEMA,
    BAR,
    RV,
    MAX,
};

