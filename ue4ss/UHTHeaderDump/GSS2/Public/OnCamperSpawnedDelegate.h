#pragma once
#include "CoreMinimal.h"
#include "OnCamperSpawnedDelegate.generated.h"

class URVCamperComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCamperSpawned, URVCamperComponent*, Camper);

