#pragma once
#include "CoreMinimal.h"
#include "PawnSpawnedDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPawnSpawned, const APawn*, NewPawn);

