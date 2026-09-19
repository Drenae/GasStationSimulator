#pragma once
#include "CoreMinimal.h"
#include "ActorSnappedToMagnetDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActorSnappedToMagnet, AActor*, SnappedActor);

