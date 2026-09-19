#pragma once
#include "CoreMinimal.h"
#include "SDToiledClogLevelDelegateDelegate.generated.h"

class ASDToiletMinigame;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSDToiledClogLevelDelegate, ASDToiletMinigame*, Toilet, int32, PreviousClogLevel, int32, NewClogLevel);

