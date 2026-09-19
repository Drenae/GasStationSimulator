#pragma once
#include "CoreMinimal.h"
#include "OnQuestFinishedDelegate.generated.h"

class UQuestBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestFinished, UQuestBase*, QuestFinished);

