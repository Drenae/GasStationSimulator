#pragma once
#include "CoreMinimal.h"
#include "EDecorationCameraType.h"
#include "OnDecorationCameraBoughtDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDecorationCameraBought, EDecorationCameraType, CameraType);

