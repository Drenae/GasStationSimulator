#pragma once
#include "CoreMinimal.h"
#include "OnCustomerArrivedAtCarWashDelegate.generated.h"

class AAICharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCustomerArrivedAtCarWash, AAICharacterBase*, Customer);

