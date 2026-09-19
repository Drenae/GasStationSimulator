#pragma once
#include "CoreMinimal.h"
#include "OnPlayerInteractionDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerInteraction, AActor*, Actor);

