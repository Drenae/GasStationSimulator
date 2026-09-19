#pragma once
#include "CoreMinimal.h"
#include "EGSS_Stat.h"
#include "ChallengeObjectiveUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FChallengeObjectiveUpdated, EGSS_Stat, ChallengeType, int32, NewAmount, bool, IsPartDone);

