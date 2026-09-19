#pragma once
#include "CoreMinimal.h"
#include "CameraChangedDelegate.generated.h"

class UCraneCamera;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCameraChanged, UCraneCamera*, NewCamera);

