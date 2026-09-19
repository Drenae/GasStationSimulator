#pragma once
#include "CoreMinimal.h"
#include "QuestChallenge.h"
#include "PostGameChallengeStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPostGameChallengeStarted, FQuestChallenge, ChallengeInfo);

