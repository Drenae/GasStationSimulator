#pragma once
#include "CoreMinimal.h"
#include "OnWreckRemovedFromAreaDelegate.generated.h"

class ACarWreckPlaceableArea;
class AJunkyardCarWreck;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWreckRemovedFromArea, ACarWreckPlaceableArea*, Area, AJunkyardCarWreck*, Wreck);

