#pragma once
#include "CoreMinimal.h"
#include "NextExhibitionSpotDelegate.generated.h"

class AExhibitionSpotSlot;
class AJunkyardCarWreckCustomizable;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNextExhibitionSpot, AJunkyardCarWreckCustomizable*, NextCar, AExhibitionSpotSlot*, NextSpot);

