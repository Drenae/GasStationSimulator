#pragma once
#include "CoreMinimal.h"
#include "CharacterLevelUpDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterLevelUp, const int32, NewLevel);

