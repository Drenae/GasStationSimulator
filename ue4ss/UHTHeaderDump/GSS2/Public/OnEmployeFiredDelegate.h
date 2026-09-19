#pragma once
#include "CoreMinimal.h"
#include "OnEmployeFiredDelegate.generated.h"

class AAICharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEmployeFired, AAICharacterBase*, CharacterRef);

