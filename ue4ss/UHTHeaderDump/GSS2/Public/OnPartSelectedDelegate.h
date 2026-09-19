#pragma once
#include "CoreMinimal.h"
#include "EJunkyardCarPartType.h"
#include "StorageCarPart.h"
#include "OnPartSelectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPartSelected, const bool, Result, const EJunkyardCarPartType, Slot, const FStorageCarPart, PartData);

