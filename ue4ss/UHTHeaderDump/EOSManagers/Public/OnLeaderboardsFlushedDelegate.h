#pragma once
#include "CoreMinimal.h"
#include "OnLeaderboardsFlushedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLeaderboardsFlushed, const FName&, SessionName, bool, bWasSuccessfull);

