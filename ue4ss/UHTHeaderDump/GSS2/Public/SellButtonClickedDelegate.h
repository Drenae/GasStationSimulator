#pragma once
#include "CoreMinimal.h"
#include "SellButtonClickedDelegate.generated.h"

class AExhibitionSpotSlot;
class AJunkyardCarWreckCustomizable;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSellButtonClicked, AJunkyardCarWreckCustomizable*, PickedCar, AExhibitionSpotSlot*, PickedCarExhibitionSpot);

