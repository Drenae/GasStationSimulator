#pragma once
#include "CoreMinimal.h"
#include "OnAnalyticsEventSendCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAnalyticsEventSendCompleted, bool, bCompletedSuccessfully, const FString&, ErrorMessage);

