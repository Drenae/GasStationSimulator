#pragma once
#include "CoreMinimal.h"
#include "OnWreckProcessingEndedDelegate.generated.h"

class ACarWreckPlaceableArea;
class AJunkyardCarWreck;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWreckProcessingEnded, AJunkyardCarWreck*, ProcessedWreck, ACarWreckPlaceableArea*, ProcessedArea);

