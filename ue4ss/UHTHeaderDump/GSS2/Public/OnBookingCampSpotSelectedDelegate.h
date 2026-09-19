#pragma once
#include "CoreMinimal.h"
#include "OnBookingCampSpotSelectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBookingCampSpotSelected, int32, CampSpotIndex);

