#pragma once
#include "CoreMinimal.h"
#include "EFuelMagazine.h"
#include "FuelPriceUpdatedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFuelPriceUpdated, const EFuelMagazine, FuelType, const float, NewPrice, const UObject*, ActionInstigator);

