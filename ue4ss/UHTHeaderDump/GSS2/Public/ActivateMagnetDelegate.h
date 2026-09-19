#pragma once
#include "CoreMinimal.h"
#include "ActivateMagnetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActivateMagnet, bool, bIsPressed);

