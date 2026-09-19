#pragma once
#include "CoreMinimal.h"
#include "ENPTaskFinishReason.generated.h"

UENUM(BlueprintType)
enum class ENPTaskFinishReason : uint8 {
    WorkEnd,
    Conversation,
    EndTime,
};

