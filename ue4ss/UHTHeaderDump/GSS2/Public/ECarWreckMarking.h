#pragma once
#include "CoreMinimal.h"
#include "ECarWreckMarking.generated.h"

UENUM(BlueprintType)
enum class ECarWreckMarking : uint8 {
    NONE,
    CRUSH,
    MOVE,
    DISASSEMBLE_PARTS,
    ASSEMBLE_PARTS,
    GRIND,
    MAX,
};

