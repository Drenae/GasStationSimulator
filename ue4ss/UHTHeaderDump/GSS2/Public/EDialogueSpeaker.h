#pragma once
#include "CoreMinimal.h"
#include "EDialogueSpeaker.generated.h"

UENUM(BlueprintType)
enum class EDialogueSpeaker : uint8 {
    ANY,
    PRIMARY,
    SECONDARY,
    MAX,
};

