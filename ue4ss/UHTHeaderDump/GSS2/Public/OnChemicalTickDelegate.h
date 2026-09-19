#pragma once
#include "CoreMinimal.h"
#include "StorageCarPart.h"
#include "OnChemicalTickDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChemicalTick, FStorageCarPart, Part, int32, Index);

