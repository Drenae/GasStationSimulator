#pragma once
#include "CoreMinimal.h"
#include "PlayerVehicleMoveForwardDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerVehicleMoveForward, float, Val);

