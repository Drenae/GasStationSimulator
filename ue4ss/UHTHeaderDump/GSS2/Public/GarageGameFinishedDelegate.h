#pragma once
#include "CoreMinimal.h"
#include "GarageGameFinishedDelegate.generated.h"

class ACarLift;
class AGSSWheeledVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGarageGameFinished, ACarLift*, CarLiftReference, AGSSWheeledVehicle*, CarReference);

