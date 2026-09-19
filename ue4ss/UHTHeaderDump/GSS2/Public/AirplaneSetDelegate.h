#pragma once
#include "CoreMinimal.h"
#include "AirplaneSetDelegate.generated.h"

class ATradingAirplane;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAirplaneSet, const ATradingAirplane*, CurrentAirplane);

