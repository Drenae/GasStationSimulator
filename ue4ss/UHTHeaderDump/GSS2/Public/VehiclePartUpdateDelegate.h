#pragma once
#include "CoreMinimal.h"
#include "VehiclePartUpdateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVehiclePartUpdate, const AActor*, TargetActor, const bool, Fixed);

