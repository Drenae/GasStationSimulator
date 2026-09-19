#pragma once
#include "CoreMinimal.h"
#include "OnCamper3DWidgetToggleDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCamper3DWidgetToggle, bool, ShowWidget);

