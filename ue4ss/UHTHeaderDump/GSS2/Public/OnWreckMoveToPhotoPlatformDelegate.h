#pragma once
#include "CoreMinimal.h"
#include "OnWreckMoveToPhotoPlatformDelegate.generated.h"

class ACarWreckPlaceableArea;
class AJunkyardCarWreck;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWreckMoveToPhotoPlatform, ACarWreckPlaceableArea*, AreaFrom, AJunkyardCarWreck*, CarWreck);

