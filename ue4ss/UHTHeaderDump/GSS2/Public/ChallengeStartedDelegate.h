#pragma once
#include "CoreMinimal.h"
#include "ChallengeStartedDelegate.generated.h"

class UGSSQuest;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChallengeStarted, UGSSQuest*, QuestRef);

