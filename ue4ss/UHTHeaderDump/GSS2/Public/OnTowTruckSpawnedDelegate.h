#pragma once
#include "CoreMinimal.h"
#include "OnTowTruckSpawnedDelegate.generated.h"

class AGSSWheeledVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTowTruckSpawned, AGSSWheeledVehicle*, TowTruck);

