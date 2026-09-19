#pragma once
#include "CoreMinimal.h"
#include "EEconomyDetailedYieldType.h"
#include "CharacterMoneyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCharacterMoneyDelegate, const float, CharacterMoney, const float, Difference, EEconomyDetailedYieldType, YieldType);

