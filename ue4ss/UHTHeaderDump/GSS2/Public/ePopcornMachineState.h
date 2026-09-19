#pragma once
#include "CoreMinimal.h"
#include "ePopcornMachineState.generated.h"

UENUM(BlueprintType)
enum class ePopcornMachineState : uint8 {
    READY,
    INPROGRESS,
};

