#pragma once
#include "CoreMinimal.h"
#include "OnNpcSpawnedDelegate.generated.h"

class AAICharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNpcSpawned, AAICharacterBase*, AICharacterBase);

