#pragma once
#include "CoreMinimal.h"
#include "OnTrashContainerTrashAmountChangedDelegate.generated.h"

class AActor;
class AItem;
class ATrashBin;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnTrashContainerTrashAmountChanged, ATrashBin*, TrashBin, TArray<AActor*>, CurrentTrashInside, AItem*, NewTrashItem, bool, bAdded);

