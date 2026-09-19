#pragma once
#include "CoreMinimal.h"
#include "OnQuestLineFinishedDelegate.generated.h"

class UQuestLineBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestLineFinished, UQuestLineBase*, QuestLineFinished);

