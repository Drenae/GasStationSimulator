#pragma once
#include "CoreMinimal.h"
#include "ERVUpgradableBuilding.generated.h"

UENUM(BlueprintType)
enum class ERVUpgradableBuilding : uint8 {
    CAMP_SPOT,
    SERVICE,
    RESOURCE,
    OFFICE,
    CONCERT,
    COUSIN_HOUSE,
    MAX,
};

