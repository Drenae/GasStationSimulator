#pragma once
#include "CoreMinimal.h"
#include "QuestUpdatedDelegate.generated.h"

class UGSSQuest;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestUpdated, const UGSSQuest*, CurrentQuest);

