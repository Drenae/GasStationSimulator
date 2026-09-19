#pragma once
#include "CoreMinimal.h"
#include "OnQuestLineStartedDelegate.generated.h"

class UQuestLineBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestLineStarted, UQuestLineBase*, QuestLineStarted);

