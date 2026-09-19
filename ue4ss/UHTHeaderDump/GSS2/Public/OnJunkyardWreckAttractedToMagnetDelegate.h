#pragma once
#include "CoreMinimal.h"
#include "OnJunkyardWreckAttractedToMagnetDelegate.generated.h"

class AJunkyardCarWreck;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJunkyardWreckAttractedToMagnet, AJunkyardCarWreck*, AttractedWreck);

