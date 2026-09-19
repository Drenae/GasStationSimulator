#pragma once
#include "CoreMinimal.h"
#include "OnWreckPlacedOnAreaDelegate.generated.h"

class ACarWreckPlaceableArea;
class AJunkyardCarWreck;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWreckPlacedOnArea, ACarWreckPlaceableArea*, Area, AJunkyardCarWreck*, Wreck);

