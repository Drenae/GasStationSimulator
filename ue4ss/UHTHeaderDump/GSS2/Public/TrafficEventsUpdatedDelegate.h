#pragma once
#include "CoreMinimal.h"
#include "TimeStruct.h"
#include "TrafficEventsUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FTrafficEventsUpdated, const int32, CurrentEventID, const int32, UpcomingEventID, const FTimeStruct, CurrentEventTimeLeft, const FTimeStruct, UpcomingEventTimeLeft);

