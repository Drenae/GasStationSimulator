#pragma once
#include "CoreMinimal.h"
#include "ECarWreckMarkingError.generated.h"

UENUM(BlueprintType)
enum class ECarWreckMarkingError : uint8 {
    DEFAULT,
    NO_PARTS_TO_DISASSEMBLE,
    PARTS_NOT_DISASSEMBLED,
    NOT_RUSTY,
    CANT_BE_MOVED,
    NOT_ON_PLATFORM,
    NO_SPACE_IN_GARAGE,
    NO_SPACE_IN_STORAGE,
    ASSEMBLY_ACTIVE,
};

