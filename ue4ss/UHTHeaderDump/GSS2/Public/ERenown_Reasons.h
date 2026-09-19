#pragma once
#include "CoreMinimal.h"
#include "ERenown_Reasons.generated.h"

UENUM(BlueprintType)
enum class ERenown_Reasons : uint8 {
    SHOP_CUSTOMER_SERVED,
    FUEL_CUSTOMER_SERVED,
    CARS_WASHED,
    GARAGE_CUSTOMER_SERVED,
    ICE_CREAM_CUSTOMERS_SERVED,
    TRASH,
    TOILET,
    CHALLENGES,
    HELPING_JOE,
    WAITED_TOO_LONG,
    PARTY_SPOT,
    BIKER,
    CHEATS,
    DIRTY,
    STEALING,
    OTHER,
    NO_RENOWN,
    TIME,
    SACRIFICE,
    CUSTOMER_DIED,
    PLAYER_LITTERING,
    SHOWER,
    BUILDING_BOUGHT,
    LANDMARK_BOUGHT,
    LOTTERY,
    MAX,
};

