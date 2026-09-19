#pragma once
#include "CoreMinimal.h"
#include "StartActionAnimDelegate.generated.h"

class AAICharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStartActionAnim, const int32, ActionID, const AAICharacterBase*, AICharacterBase);

