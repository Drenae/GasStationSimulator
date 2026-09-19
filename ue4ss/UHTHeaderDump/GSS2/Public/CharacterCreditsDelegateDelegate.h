#pragma once
#include "CoreMinimal.h"
#include "CharacterCreditsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterCreditsDelegate, const float, CharacterCredits);

