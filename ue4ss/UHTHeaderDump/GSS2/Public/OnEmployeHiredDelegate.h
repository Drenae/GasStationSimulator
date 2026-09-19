#pragma once
#include "CoreMinimal.h"
#include "OnEmployeHiredDelegate.generated.h"

class AAICharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEmployeHired, AAICharacterBase*, CharacterRef);

