#pragma once
#include "CoreMinimal.h"
#include "GarageCarLiftSwitchDelegate.generated.h"

class ACarLift;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGarageCarLiftSwitch, ACarLift*, CarLiftReference);

