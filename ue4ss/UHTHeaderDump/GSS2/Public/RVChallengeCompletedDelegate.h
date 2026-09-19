#pragma once
#include "CoreMinimal.h"
#include "RVChallengeCompletedDelegate.generated.h"

class URVChallenge;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRVChallengeCompleted, URVChallenge*, Objective);

