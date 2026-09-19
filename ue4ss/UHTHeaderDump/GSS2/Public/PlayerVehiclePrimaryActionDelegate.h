#pragma once
#include "CoreMinimal.h"
#include "PlayerVehiclePrimaryActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerVehiclePrimaryAction, bool, bIsPressed);

