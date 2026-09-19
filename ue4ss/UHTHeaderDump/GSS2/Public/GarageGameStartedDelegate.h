#pragma once
#include "CoreMinimal.h"
#include "GarageGameStartedDelegate.generated.h"

class ACarLift;
class AGSSWheeledVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGarageGameStarted, ACarLift*, CarLiftReference, AGSSWheeledVehicle*, CarReference);

