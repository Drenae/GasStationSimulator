#pragma once
#include "CoreMinimal.h"
#include "RvMinigameAttachedHandleItemDelegate.generated.h"

class AItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRvMinigameAttachedHandleItem, AItem*, Item);

