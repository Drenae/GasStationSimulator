#pragma once
#include "CoreMinimal.h"
#include "OnReportSendProgressDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReportSendProgress, float, PercentOfDataSend);

