#pragma once
#include "CoreMinimal.h"
#include "EUpgradeBuildingType.generated.h"

UENUM(BlueprintType)
enum class EUpgradeBuildingType : uint8 {
    GAS_STATION,
    WAREHOUSE,
    WORKSHOP,
    CAR_WASH,
    PARTY_TIME,
    PARTY_SPOT,
    ICE_CREAM_STAND,
    BARN,
    AIRPORT,
    AIRPORT_STORAGE,
    TRADE_CENTER,
    RADIO_TOWER,
    BUS_STOP,
    PARKING_SPOT,
    TOILET,
    EMPLOYEE_CARAVAN,
    MAX,
};

