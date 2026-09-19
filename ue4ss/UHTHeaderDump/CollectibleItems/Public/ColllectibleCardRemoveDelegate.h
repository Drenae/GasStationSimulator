#pragma once
#include "CoreMinimal.h"
#include "CollectibleCardStruct.h"
#include "ColllectibleCardRemoveDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FColllectibleCardRemove, FCollectibleCardStruct, RemovedCard);

