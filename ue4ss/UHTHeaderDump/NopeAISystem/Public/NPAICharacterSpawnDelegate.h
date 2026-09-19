#pragma once
#include "CoreMinimal.h"
#include "NPAICharacterSpawnDelegate.generated.h"

class ANPAICharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNPAICharacterSpawn, const ANPAICharacterBase*, OutNPAICharacterBase, bool, CharacterSpawned);

