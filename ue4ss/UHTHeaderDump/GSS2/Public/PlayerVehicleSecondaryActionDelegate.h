#pragma once
#include "CoreMinimal.h"
#include "PlayerVehicleSecondaryActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerVehicleSecondaryAction, bool, bIsPressed);

