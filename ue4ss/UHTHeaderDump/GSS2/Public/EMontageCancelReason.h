#pragma once
#include "CoreMinimal.h"
#include "EMontageCancelReason.generated.h"

UENUM(BlueprintType)
enum class EMontageCancelReason : uint8 {
    NewTask,
    Dialog,
    MAX,
};

