#pragma once
#include "CoreMinimal.h"
#include "OnBoatSpawnedDelegate.generated.h"

class AWaterVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBoatSpawned, AWaterVehicle*, BoatSpawned);

