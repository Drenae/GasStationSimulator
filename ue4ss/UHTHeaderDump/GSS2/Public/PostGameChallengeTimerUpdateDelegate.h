#pragma once
#include "CoreMinimal.h"
#include "PostGameChallengeTimerUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPostGameChallengeTimerUpdate, float, TimeLeft);

