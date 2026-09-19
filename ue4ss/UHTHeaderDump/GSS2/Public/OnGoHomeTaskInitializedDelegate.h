#pragma once
#include "CoreMinimal.h"
#include "OnGoHomeTaskInitializedDelegate.generated.h"

class AAICharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGoHomeTaskInitialized, AAICharacterBase*, AICharacter);

