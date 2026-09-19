#pragma once
#include "CoreMinimal.h"
#include "OnWreckPlayerProcessingStartedDelegate.generated.h"

class AJunkyardCarWreck;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWreckPlayerProcessingStarted, AJunkyardCarWreck*, Wreck);

