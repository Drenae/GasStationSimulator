#pragma once
#include "CoreMinimal.h"
#include "EGameAction.generated.h"

UENUM(BlueprintType)
enum class EGameAction : uint8 {
    END_CONVERSATION,
    START_DIALOGUE,
    TRIGGER_RANDOM_NPC_DIALOGUE,
    TRIGGER_SPECIFIC_NPC_DIALOGUE,
    FINISH_ACTIVE_QUEST,
    FIRE_ACTIVE_QUEST_EXTERNAL_EVENT,
    MAX,
};

