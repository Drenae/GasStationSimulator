#pragma once
#include "CoreMinimal.h"
#include "OnDenisDecalPaintedOverDelegate.generated.h"

class ACustomizationHousePart;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDenisDecalPaintedOver, ACustomizationHousePart*, ParentWall);

