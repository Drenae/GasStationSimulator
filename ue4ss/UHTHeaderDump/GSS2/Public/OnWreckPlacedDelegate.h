#pragma once
#include "CoreMinimal.h"
#include "OnWreckPlacedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWreckPlaced, AActor*, Wreck);

