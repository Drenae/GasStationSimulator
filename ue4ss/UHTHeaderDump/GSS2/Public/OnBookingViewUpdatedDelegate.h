#pragma once
#include "CoreMinimal.h"
#include "ERVBookingView.h"
#include "OnBookingViewUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBookingViewUpdated, ERVBookingView, NewBookingView);

