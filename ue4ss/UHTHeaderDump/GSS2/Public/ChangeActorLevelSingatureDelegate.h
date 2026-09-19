#pragma once
#include "CoreMinimal.h"
#include "ChangeActorLevelSingatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeActorLevelSingature, const int32, ActorLevel);

