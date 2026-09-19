#pragma once
#include "CoreMinimal.h"
#include "OnCannonHitStartedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCannonHitStarted, AActor*, AICharacter);

