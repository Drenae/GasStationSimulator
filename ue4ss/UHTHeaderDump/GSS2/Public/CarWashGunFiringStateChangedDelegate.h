#pragma once
#include "CoreMinimal.h"
#include "CarWashGunFiringStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCarWashGunFiringStateChanged, bool, bFiring);

