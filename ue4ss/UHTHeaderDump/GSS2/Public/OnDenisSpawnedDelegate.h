#pragma once
#include "CoreMinimal.h"
#include "OnDenisSpawnedDelegate.generated.h"

class AAICharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDenisSpawned, AAICharacterBase*, Denis);

