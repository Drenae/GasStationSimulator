#pragma once
#include "CoreMinimal.h"
#include "TowyChangeModeActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTowyChangeModeAction, bool, bIsPressed);

