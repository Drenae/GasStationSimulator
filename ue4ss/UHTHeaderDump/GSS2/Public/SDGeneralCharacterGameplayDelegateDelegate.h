#pragma once
#include "CoreMinimal.h"
#include "SDGeneralCharacterGameplayDelegateDelegate.generated.h"

class AAICharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSDGeneralCharacterGameplayDelegate, AAICharacterBase*, Character);

