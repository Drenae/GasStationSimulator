#pragma once
#include "CoreMinimal.h"
#include "EFileSDKFileAnchor.generated.h"

UENUM(BlueprintType)
enum class EFileSDKFileAnchor : uint8 {
    Beginning,
    Current,
    End,
};

