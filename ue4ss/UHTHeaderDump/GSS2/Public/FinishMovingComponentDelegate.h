#pragma once
#include "CoreMinimal.h"
#include "FinishMovingComponentDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFinishMovingComponent, const AActor*, GoalTargetActor);

