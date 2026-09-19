#pragma once
#include "CoreMinimal.h"
#include "OnJoeAirplaneCrashedDelegate.generated.h"

class AAirplane_TapingMinigame;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJoeAirplaneCrashed, AAirplane_TapingMinigame*, JoeAirplane);

