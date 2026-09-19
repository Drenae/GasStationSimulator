#pragma once
#include "CoreMinimal.h"
#include "OnCarSentToExhibitionDelegate.generated.h"

class AJunkyardCarWreck;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCarSentToExhibition, AJunkyardCarWreck*, SentCar);

