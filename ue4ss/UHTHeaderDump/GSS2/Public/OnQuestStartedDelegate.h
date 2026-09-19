#pragma once
#include "CoreMinimal.h"
#include "OnQuestStartedDelegate.generated.h"

class UQuestBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestStarted, UQuestBase*, QuestStarted);

