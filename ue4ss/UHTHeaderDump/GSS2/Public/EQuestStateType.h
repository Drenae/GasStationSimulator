#pragma once
#include "CoreMinimal.h"
#include "EQuestStateType.generated.h"

UENUM(BlueprintType)
enum class EQuestStateType : uint8 {
    none,
    Passed,
    Allow,
    OnQuest,
};

