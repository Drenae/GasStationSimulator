#pragma once
#include "CoreMinimal.h"
#include "OnWreckTakenDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWreckTaken, AActor*, Wreck);

