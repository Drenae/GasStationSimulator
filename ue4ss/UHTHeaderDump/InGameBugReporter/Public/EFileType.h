#pragma once
#include "CoreMinimal.h"
#include "EFileType.generated.h"

UENUM(BlueprintType)
enum class EFileType : uint8 {
    SAVE,
    SCREENSHOT,
    BUGFILE,
    MAX,
};

