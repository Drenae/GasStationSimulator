#pragma once
#include "CoreMinimal.h"
#include "EHumanType.h"
#include "SpecialAICharacterBaseSpawnDelegate.generated.h"

class AAICharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpecialAICharacterBaseSpawn, const AAICharacterBase*, AICharacterBase, const EHumanType, HumanType);

