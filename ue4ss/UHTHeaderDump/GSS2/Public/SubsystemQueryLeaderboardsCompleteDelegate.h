#pragma once
#include "CoreMinimal.h"
#include "EMinigame.h"
#include "EOSLeaderboardEntry.h"
#include "SubsystemQueryLeaderboardsCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSubsystemQueryLeaderboardsComplete, bool, bWasSuccessful, const TArray<FEOSLeaderboardEntry>&, LeaderboardEntries, EMinigame, minigame);

