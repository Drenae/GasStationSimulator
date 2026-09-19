#pragma once
#include "CoreMinimal.h"
#include "ENumberOfDancingNPC.generated.h"

UENUM(BlueprintType)
enum class ENumberOfDancingNPC : uint8 {
    One,
    Three,
    Six,
    Eight,
    Eleven,
    Thirteen,
    MAX,
};

