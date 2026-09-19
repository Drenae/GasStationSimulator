#pragma once
#include "CoreMinimal.h"
#include "EQuestState.h"
#include "QuestFinishedDelegate.generated.h"

class UGSSQuest;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FQuestFinished, const EQuestState, EndQuestState, const UGSSQuest*, GSSQuest);

