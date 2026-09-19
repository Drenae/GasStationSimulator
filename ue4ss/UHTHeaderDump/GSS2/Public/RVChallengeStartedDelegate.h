#pragma once
#include "CoreMinimal.h"
#include "RVChallengeStartedDelegate.generated.h"

class URVChallenge;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRVChallengeStarted, URVChallenge*, Objective);

