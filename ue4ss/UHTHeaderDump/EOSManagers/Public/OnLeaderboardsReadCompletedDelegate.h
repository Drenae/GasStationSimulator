#pragma once
#include "CoreMinimal.h"
#include "LeaderboardData.h"
#include "OnLeaderboardsReadCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLeaderboardsReadCompleted, const FName&, LeaderboardName, bool, bWasSuccessfull, const TArray<FLeaderboardData>&, LeaderboardRows);

