#pragma once
#include "CoreMinimal.h"
#include "OnShowInteractionDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShowInteraction, AActor*, InteractionActor);

