#pragma once
#include "CoreMinimal.h"
#include "ZoomAxisDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FZoomAxis, float, Val);

