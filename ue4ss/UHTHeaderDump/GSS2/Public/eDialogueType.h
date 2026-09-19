#pragma once
#include "CoreMinimal.h"
#include "eDialogueType.generated.h"

UENUM(BlueprintType)
enum class eDialogueType : uint8 {
    GREETING,
    NPC_TEXT,
    NPC_TEXT_RESPOND,
    PLAYER_TEXT,
    MAX,
};

