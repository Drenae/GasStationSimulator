#pragma once
#include "CoreMinimal.h"
#include "OnContractTakenDelegate.generated.h"

class UContractBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnContractTaken, UContractBase*, TakenContract);

