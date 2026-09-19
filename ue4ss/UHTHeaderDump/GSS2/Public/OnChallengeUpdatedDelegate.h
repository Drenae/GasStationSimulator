#pragma once
#include "CoreMinimal.h"
#include "OnChallengeUpdatedDelegate.generated.h"

class URVChallengeCondition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChallengeUpdated, URVChallengeCondition*, ChallengeCondition);

