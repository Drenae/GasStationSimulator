#pragma once
#include "CoreMinimal.h"
#include "OnObjectiveMarkerSpawnedDelegate.generated.h"

class AObjectiveMarker;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnObjectiveMarkerSpawned, AObjectiveMarker*, ObjectiveMarker);

