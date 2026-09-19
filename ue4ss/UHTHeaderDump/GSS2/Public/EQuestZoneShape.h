#pragma once
#include "CoreMinimal.h"
#include "EQuestZoneShape.generated.h"

UENUM(BlueprintType)
enum class EQuestZoneShape : uint8 {
    BOX,
    CYLINDER,
    MAX,
};

