#pragma once
#include "CoreMinimal.h"
#include "OnCarWreckPartHoveredDelegate.generated.h"

class UJunkyardCarPartCustomizable;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCarWreckPartHovered, const bool, bHovered, UJunkyardCarPartCustomizable*, CarPart);

