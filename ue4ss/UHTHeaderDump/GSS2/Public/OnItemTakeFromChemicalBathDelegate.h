#pragma once
#include "CoreMinimal.h"
#include "StorageCarPart.h"
#include "OnItemTakeFromChemicalBathDelegate.generated.h"

class AChemicalBath;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemTakeFromChemicalBath, AChemicalBath*, Chemical, FStorageCarPart, Part);

