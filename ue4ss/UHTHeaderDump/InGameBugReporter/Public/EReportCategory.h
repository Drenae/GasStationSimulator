#pragma once
#include "CoreMinimal.h"
#include "EReportCategory.generated.h"

UENUM(BlueprintType)
enum class EReportCategory : uint8 {
    None,
    Crash_Freeze,
    Performance,
    GameplayDefects,
    Visual,
    Audio,
    Other,
    MAX,
};

