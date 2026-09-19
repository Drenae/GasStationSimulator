#pragma once
#include "CoreMinimal.h"
#include "EHumanType.generated.h"

UENUM(BlueprintType)
enum class EHumanType : uint8 {
    Normal,
    Delivery,
    Party,
    Employee,
    Police,
    PartySpot,
    Prisoner,
    Camper,
    RVGuest,
};

