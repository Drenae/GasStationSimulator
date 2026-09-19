#pragma once
#include "CoreMinimal.h"
#include "HandleActorUpdateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHandleActorUpdate, const AActor*, Actor);

