#pragma once
#include "CoreMinimal.h"
#include "OnPlaceableActorInitializedDelegate.generated.h"

class APlaceableActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlaceableActorInitialized, APlaceableActor*, InitializedActor);

