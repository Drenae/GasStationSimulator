#pragma once
#include "CoreMinimal.h"
#include "EMontageStatus.generated.h"

UENUM(BlueprintType)
namespace EMontageStatus {
    enum Type {
        Start,
        Stop,
    };
}

