#pragma once
#include "CoreMinimal.h"
#include "HighlightsToggledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHighlightsToggled, bool, Showighlights);

