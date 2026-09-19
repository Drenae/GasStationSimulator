#pragma once
#include "CoreMinimal.h"
#include "ActorDetachedFromMagnetDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActorDetachedFromMagnet, AActor*, DetachedActor);

