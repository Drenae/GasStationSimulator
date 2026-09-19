#pragma once
#include "CoreMinimal.h"
#include "TrashAmountInVolumeUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTrashAmountInVolumeUpdated, int32, Difference, int32, NewCount);

