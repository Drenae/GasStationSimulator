#pragma once
#include "CoreMinimal.h"
#include "OnCannonHitEndedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCannonHitEnded, AActor*, AICharacter);

