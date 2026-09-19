#pragma once
#include "CoreMinimal.h"
#include "OnJoeAirplaneAttachedToTowyDelegate.generated.h"

class AAirplane_TapingMinigame;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJoeAirplaneAttachedToTowy, AAirplane_TapingMinigame*, JoeAirplane);

