#pragma once
#include "CoreMinimal.h"
#include "OnEquipmentRemovedFromQueueDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEquipmentRemovedFromQueue, const int32, EquipmentRef);

