#pragma once
#include "CoreMinimal.h"
#include "OnCinemaRenownPointsAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCinemaRenownPointsAdded, float, AddedPoints);

