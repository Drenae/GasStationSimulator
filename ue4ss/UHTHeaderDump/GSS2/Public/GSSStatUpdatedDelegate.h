#pragma once
#include "CoreMinimal.h"
#include "EGSS_Stat.h"
#include "GSSStatUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGSSStatUpdated, EGSS_Stat, StatChanged, int32, ValueChanged);

