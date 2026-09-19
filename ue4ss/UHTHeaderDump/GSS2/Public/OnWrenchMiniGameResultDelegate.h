#pragma once
#include "CoreMinimal.h"
#include "EJunkyardCarPartType.h"
#include "StorageCarPart.h"
#include "OnWrenchMiniGameResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnWrenchMiniGameResult, const bool, Result, const EJunkyardCarPartType, Slot, FStorageCarPart, PartStruct);

