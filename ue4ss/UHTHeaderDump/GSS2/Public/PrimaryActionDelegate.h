#pragma once
#include "CoreMinimal.h"
#include "PrimaryActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPrimaryAction, bool, bIsPressed);

