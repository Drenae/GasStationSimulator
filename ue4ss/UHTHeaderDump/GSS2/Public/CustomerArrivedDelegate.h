#pragma once
#include "CoreMinimal.h"
#include "CustomerArrivedDelegate.generated.h"

class AAICharacterBase;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCustomerArrived, AAICharacterBase*, Customer, AActor*, TargetActor);

