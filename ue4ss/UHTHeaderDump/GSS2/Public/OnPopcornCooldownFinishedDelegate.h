#pragma once
#include "CoreMinimal.h"
#include "OnPopcornCooldownFinishedDelegate.generated.h"

class AAICharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPopcornCooldownFinished, const AAICharacterBase*, AICharacterBase);

