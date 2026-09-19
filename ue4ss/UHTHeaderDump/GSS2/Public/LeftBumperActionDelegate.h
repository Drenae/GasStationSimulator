#pragma once
#include "CoreMinimal.h"
#include "LeftBumperActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLeftBumperAction, bool, bIsPressed);

