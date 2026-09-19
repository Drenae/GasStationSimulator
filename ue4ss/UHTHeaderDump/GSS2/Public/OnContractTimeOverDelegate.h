#pragma once
#include "CoreMinimal.h"
#include "OnContractTimeOverDelegate.generated.h"

class UContractBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnContractTimeOver, UContractBase*, TimeOverContract);

