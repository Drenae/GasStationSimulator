#pragma once
#include "CoreMinimal.h"
#include "RightBumperActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRightBumperAction, bool, bIsPressed);

