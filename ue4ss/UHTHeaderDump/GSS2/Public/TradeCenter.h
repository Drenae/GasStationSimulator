#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "TradeCenter.generated.h"

UCLASS(Blueprintable)
class GSS2_API ATradeCenter : public AInteractableBuilding {
    GENERATED_BODY()
public:
    ATradeCenter(const FObjectInitializer& ObjectInitializer);

};

