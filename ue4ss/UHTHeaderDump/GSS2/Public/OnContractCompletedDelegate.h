#pragma once
#include "CoreMinimal.h"
#include "OnContractCompletedDelegate.generated.h"

class UContractBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnContractCompleted, UContractBase*, CompletedContract, bool, bSuccess);

