#pragma once
#include "CoreMinimal.h"
#include "EFuelMagazine.h"
#include "OnFuelOrderedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFuelOrdered, EFuelMagazine, Destination, float, FuelAmount);

