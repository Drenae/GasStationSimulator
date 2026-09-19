#pragma once
#include "CoreMinimal.h"
#include "QuestSpawnedDelegate.generated.h"

class UGSSQuest;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestSpawned, const UGSSQuest*, GSSQuest);

