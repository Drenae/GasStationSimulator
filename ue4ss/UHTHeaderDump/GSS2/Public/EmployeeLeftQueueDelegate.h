#pragma once
#include "CoreMinimal.h"
#include "EmployeeLeftQueueDelegate.generated.h"

class AAICharacterBase;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEmployeeLeftQueue, AAICharacterBase*, Employee, AActor*, TargetActor);

