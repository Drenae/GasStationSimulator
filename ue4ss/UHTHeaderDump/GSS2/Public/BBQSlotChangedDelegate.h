#pragma once
#include "CoreMinimal.h"
#include "BBQSlotChangedDelegate.generated.h"

class UBBQSlotComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBBQSlotChanged, UBBQSlotComponent*, NewSlot);

