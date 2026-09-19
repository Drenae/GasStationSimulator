#pragma once
#include "CoreMinimal.h"
#include "OnTradingAirPlaneArrivedDelegate.generated.h"

class ATradingAirplane;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTradingAirPlaneArrived, ATradingAirplane*, TradingAirplane);

