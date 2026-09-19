#pragma once
#include "CoreMinimal.h"
#include "ChallengeCompletedDelegate.generated.h"

class UGSSQuest;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChallengeCompleted, UGSSQuest*, QuestRef);

