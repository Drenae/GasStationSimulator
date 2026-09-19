#pragma once
#include "CoreMinimal.h"
#include "OnPlayerEnterVehicleDelegate.generated.h"

class AGSSPlayerCharacter;
class APlayerVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerEnterVehicle, AGSSPlayerCharacter*, PlayerCharacter, APlayerVehicle*, PlayerVehicle);

