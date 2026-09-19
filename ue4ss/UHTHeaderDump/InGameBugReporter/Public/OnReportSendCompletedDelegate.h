#pragma once
#include "CoreMinimal.h"
#include "OnReportSendCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnReportSendCompleted, bool, bCompletedSuccessfully, const FString&, ReportId, const FString&, ErrorMessage);

