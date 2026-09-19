#pragma once
#include "CoreMinimal.h"
#include "OnEmployeePaidDelegate.generated.h"

class AAICharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEmployeePaid, AAICharacterBase*, Employee, float, PayAmount);

