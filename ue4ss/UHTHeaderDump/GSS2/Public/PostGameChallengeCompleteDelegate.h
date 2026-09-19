#pragma once
#include "CoreMinimal.h"
#include "PostGameChallengeCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPostGameChallengeComplete, bool, bSuccess, int32, HappyAward);

