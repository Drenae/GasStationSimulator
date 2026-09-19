#pragma once
#include "CoreMinimal.h"
#include "OnEquipmentAddedToQueueDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEquipmentAddedToQueue, const int32, EquipmentRef);

