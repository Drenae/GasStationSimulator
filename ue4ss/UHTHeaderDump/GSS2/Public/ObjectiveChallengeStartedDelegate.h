#pragma once
#include "CoreMinimal.h"
#include "ObjectiveChallengeStartedDelegate.generated.h"

class UChallengeObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveChallengeStarted, UChallengeObjective*, Objective);

