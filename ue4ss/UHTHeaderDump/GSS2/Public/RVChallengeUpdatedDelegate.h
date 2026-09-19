#pragma once
#include "CoreMinimal.h"
#include "RVChallengeUpdatedDelegate.generated.h"

class URVChallenge;
class URVChallengeCondition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRVChallengeUpdated, URVChallenge*, Objective, URVChallengeCondition*, Condition);

