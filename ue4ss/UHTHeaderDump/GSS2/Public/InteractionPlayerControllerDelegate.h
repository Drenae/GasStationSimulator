#pragma once
#include "CoreMinimal.h"
#include "InteractionPlayerControllerDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractionPlayerController, const AActor*, Actor);

