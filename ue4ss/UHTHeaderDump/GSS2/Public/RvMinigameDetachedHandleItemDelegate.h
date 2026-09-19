#pragma once
#include "CoreMinimal.h"
#include "RvMinigameDetachedHandleItemDelegate.generated.h"

class AItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRvMinigameDetachedHandleItem, AItem*, Item);

