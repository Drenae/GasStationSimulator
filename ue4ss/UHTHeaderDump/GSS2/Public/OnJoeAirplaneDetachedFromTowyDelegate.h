#pragma once
#include "CoreMinimal.h"
#include "OnJoeAirplaneDetachedFromTowyDelegate.generated.h"

class AAirplane_TapingMinigame;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJoeAirplaneDetachedFromTowy, AAirplane_TapingMinigame*, JoeAirplane);

