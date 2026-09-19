#pragma once
#include "CoreMinimal.h"
#include "ObjectiveChallengeCompletedDelegate.generated.h"

class UChallengeObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveChallengeCompleted, UChallengeObjective*, Objective);

