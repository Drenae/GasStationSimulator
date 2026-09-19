#pragma once
#include "CoreMinimal.h"
#include "PlayerThrowDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerThrow, const bool, IsNewRecord, const AActor*, ThrowedActor);

