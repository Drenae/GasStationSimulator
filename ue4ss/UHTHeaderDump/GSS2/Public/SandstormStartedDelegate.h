#pragma once
#include "CoreMinimal.h"
#include "SandstormStartedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSandstormStarted, AActor*, Sandstorm);

