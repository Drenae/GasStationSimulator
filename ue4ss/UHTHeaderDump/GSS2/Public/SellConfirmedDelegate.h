#pragma once
#include "CoreMinimal.h"
#include "SellConfirmedDelegate.generated.h"

class AExhibitionSpotSlot;
class AJunkyardCarWreckCustomizable;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSellConfirmed, AJunkyardCarWreckCustomizable*, PickedCar, AExhibitionSpotSlot*, PickedCarExhibitionSpot, float, CarSellPrice);

