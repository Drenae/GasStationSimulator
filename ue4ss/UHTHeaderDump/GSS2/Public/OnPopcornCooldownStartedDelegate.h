#pragma once
#include "CoreMinimal.h"
#include "OnPopcornCooldownStartedDelegate.generated.h"

class AAICharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPopcornCooldownStarted, const AAICharacterBase*, AICharacterBase);

