#pragma once
#include "CoreMinimal.h"
#include "CarWreckPlaceableArea.h"
#include "WrecksSpotSlot.generated.h"

UCLASS(Blueprintable)
class GSS2_API AWrecksSpotSlot : public ACarWreckPlaceableArea {
    GENERATED_BODY()
public:
    AWrecksSpotSlot(const FObjectInitializer& ObjectInitializer);

};

