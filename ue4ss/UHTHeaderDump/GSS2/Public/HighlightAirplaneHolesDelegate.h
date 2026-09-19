#pragma once
#include "CoreMinimal.h"
#include "HighlightAirplaneHolesDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHighlightAirplaneHoles, const bool, bIsPressed);

