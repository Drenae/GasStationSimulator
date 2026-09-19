#pragma once
#include "CoreMinimal.h"
#include "StorageCarPart.h"
#include "OnItemPutIntoChemicalBathDelegate.generated.h"

class AChemicalBath;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemPutIntoChemicalBath, AChemicalBath*, Chemical, FStorageCarPart, Part);

