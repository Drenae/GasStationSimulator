#pragma once
#include "CoreMinimal.h"
#include "GeneratedLootInfo.h"
#include "GraditudeItemGotDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGraditudeItemGot, const FGeneratedLootInfo&, GraditudeItem);

