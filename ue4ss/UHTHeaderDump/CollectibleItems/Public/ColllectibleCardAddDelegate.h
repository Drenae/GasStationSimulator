#pragma once
#include "CoreMinimal.h"
#include "CollectibleCardStruct.h"
#include "ColllectibleCardAddDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FColllectibleCardAdd, FCollectibleCardStruct, CollectedCard);

