#pragma once
#include "CoreMinimal.h"
#include "GSSPlayerSpawnDelegate.generated.h"

class AGSSPlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGSSPlayerSpawn, AGSSPlayerCharacter*, CharRef);

