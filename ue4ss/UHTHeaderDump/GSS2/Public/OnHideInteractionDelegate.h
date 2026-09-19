#pragma once
#include "CoreMinimal.h"
#include "OnHideInteractionDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHideInteraction, AActor*, InteractionActor);

