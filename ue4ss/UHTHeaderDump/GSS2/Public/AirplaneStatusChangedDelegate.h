#pragma once
#include "CoreMinimal.h"
#include "ECurrentStatus.h"
#include "ERunway.h"
#include "AirplaneStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAirplaneStatusChanged, ERunway, Runway, ECurrentStatus, CurrentStatus);

