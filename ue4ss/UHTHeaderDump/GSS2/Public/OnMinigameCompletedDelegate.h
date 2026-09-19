#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "OnMinigameCompletedDelegate.generated.h"

class ARvGuestServiceSpot;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnMinigameCompleted, FGameplayTag, ServiceTag, ARvGuestServiceSpot*, ServiceBuilding, bool, bSuccess);

