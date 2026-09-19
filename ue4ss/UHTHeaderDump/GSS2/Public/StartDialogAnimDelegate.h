#pragma once
#include "CoreMinimal.h"
#include "StartDialogAnimDelegate.generated.h"

class AAICharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStartDialogAnim, const int32, DialogID, const AAICharacterBase*, AICharacterBase);

