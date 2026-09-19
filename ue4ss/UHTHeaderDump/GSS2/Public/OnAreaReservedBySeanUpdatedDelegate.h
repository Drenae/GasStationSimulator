#pragma once
#include "CoreMinimal.h"
#include "OnAreaReservedBySeanUpdatedDelegate.generated.h"

class ACarWreckPlaceableArea;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAreaReservedBySeanUpdated, ACarWreckPlaceableArea*, Area, bool, IsReservedBySean);

