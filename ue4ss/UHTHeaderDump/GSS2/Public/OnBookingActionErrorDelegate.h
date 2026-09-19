#pragma once
#include "CoreMinimal.h"
#include "OnBookingActionErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBookingActionError, FName, ErrorMessageName);

