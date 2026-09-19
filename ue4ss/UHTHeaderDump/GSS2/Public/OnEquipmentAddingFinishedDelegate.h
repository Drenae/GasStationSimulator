#pragma once
#include "CoreMinimal.h"
#include "OnEquipmentAddingFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEquipmentAddingFinished, const int32, ReplacementEqNumber);

