#pragma once
#include "CoreMinimal.h"
#include "HappyAngryUpdateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FHappyAngryUpdate, const int32, HappyCount, const int32, HappyMin, const int32, HappyMax, const bool, bIsHappy, const int32, CurrentPopularityLevel, const UObject*, Instaginator, const FString&, Reason);

