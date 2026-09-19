#pragma once
#include "CoreMinimal.h"
#include "EDLCName.generated.h"

UENUM(BlueprintType)
enum class EDLCName : uint8 {
    NONE,
    ANY,
    ALL,
    BASE,
    CUSTOMIZATION,
    PARTY_TIME,
    AIRSTRIP,
    PARADISE_ISLAND,
    SHADY_DEALS,
    JUNKYARD,
    DRIVEINCINEMA,
    RVCAMP,
    MAX,
};

