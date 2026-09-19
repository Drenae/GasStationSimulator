#pragma once
#include "CoreMinimal.h"
#include "OnCustomerCarFueledDelegate.generated.h"

class AAICharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCustomerCarFueled, AAICharacterBase*, Customer);

