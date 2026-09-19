#pragma once
#include "CoreMinimal.h"
#include "OnAchievementUnlockedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAchievementUnlockedEvent, const FString&, PlayerName, const FString&, AchievementId);

