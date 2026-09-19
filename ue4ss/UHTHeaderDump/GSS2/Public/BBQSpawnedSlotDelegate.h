#pragma once
#include "CoreMinimal.h"
#include "BBQSpawnedSlotDelegate.generated.h"

class UBBQSlotComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBBQSpawnedSlot, UBBQSlotComponent*, Slot);

