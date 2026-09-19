#pragma once
#include "CoreMinimal.h"
#include "OnChallengeConditionFinishedDelegate.generated.h"

class URVChallengeCondition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChallengeConditionFinished, URVChallengeCondition*, ChallengeCondition);

