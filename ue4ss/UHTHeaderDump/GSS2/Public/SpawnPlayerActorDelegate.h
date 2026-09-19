#pragma once
#include "CoreMinimal.h"
#include "SpawnPlayerActorDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnPlayerActor, const AActor*, Actor);

