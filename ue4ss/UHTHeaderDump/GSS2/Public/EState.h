#pragma once
#include "CoreMinimal.h"
#include "EState.generated.h"

UENUM(BlueprintType)
enum class EState : uint8 {
    TEXAS,
    NEW_MEXICO,
    OKLAHOMA,
    KANSAS,
    MISSOURI,
    ILLINOIS,
    ARIZONA,
    CALIFORNIA,
    MAX,
};

