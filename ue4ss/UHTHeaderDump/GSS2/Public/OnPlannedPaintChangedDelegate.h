#pragma once
#include "CoreMinimal.h"
#include "CarPlannedPaint.h"
#include "EJunkyardCarPartType.h"
#include "OnPlannedPaintChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlannedPaintChanged, FCarPlannedPaint, PlannedPaint, EJunkyardCarPartType, Slot);

