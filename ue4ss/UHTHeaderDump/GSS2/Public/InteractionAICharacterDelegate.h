#pragma once
#include "CoreMinimal.h"
#include "InteractionAICharacterDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractionAICharacter, AActor*, Actor);

