#pragma once
#include "CoreMinimal.h"
#include "OnWreckProcessingStartedDelegate.generated.h"

class ACarWreckPlaceableArea;
class AJunkyardCarWreck;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWreckProcessingStarted, AJunkyardCarWreck*, ProcessedWreck, ACarWreckPlaceableArea*, ProcessedArea);

