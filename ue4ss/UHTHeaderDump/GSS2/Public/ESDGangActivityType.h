#pragma once
#include "CoreMinimal.h"
#include "ESDGangActivityType.generated.h"

UENUM(BlueprintType)
enum class ESDGangActivityType : uint8 {
    FightClub,
    Conference,
    ParkingMeet,
    Warehouse,
    SheriffPatrol,
    Casino,
    PrisonBus,
    MAX,
};

