#pragma once
#include "CoreMinimal.h"
#include "JumpActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FJumpAction, bool, bIsPressed);

