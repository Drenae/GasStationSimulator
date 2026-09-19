#pragma once
#include "CoreMinimal.h"
#include "HappyAngryPopularityLevelUpDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHappyAngryPopularityLevelUp, const int32, HappyAngryPopularityLevel);

