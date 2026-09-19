#pragma once
#include "CoreMinimal.h"
#include "OnSpoonChangedVisibilityDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpoonChangedVisibility, bool, Visibility);

