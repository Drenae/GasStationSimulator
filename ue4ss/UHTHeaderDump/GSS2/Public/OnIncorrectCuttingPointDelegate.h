#pragma once
#include "CoreMinimal.h"
#include "OnIncorrectCuttingPointDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIncorrectCuttingPoint, bool, IsItFirstPoint);

