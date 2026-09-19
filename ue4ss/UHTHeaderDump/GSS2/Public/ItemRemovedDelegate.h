#pragma once
#include "CoreMinimal.h"
#include "ItemRemovedDelegate.generated.h"

class AItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemRemoved, AItem*, RemovedItem);

