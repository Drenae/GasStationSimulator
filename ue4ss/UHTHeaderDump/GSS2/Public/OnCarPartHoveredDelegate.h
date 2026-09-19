#pragma once
#include "CoreMinimal.h"
#include "EJunkyardCarPartType.h"
#include "OnCarPartHoveredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCarPartHovered, const bool, bHovered, const EJunkyardCarPartType, Slot);

