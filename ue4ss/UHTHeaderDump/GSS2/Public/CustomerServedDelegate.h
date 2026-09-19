#pragma once
#include "CoreMinimal.h"
#include "CustomerServedDelegate.generated.h"

class AAICharacterBase;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCustomerServed, AAICharacterBase*, Customer, AActor*, TargetActor);

