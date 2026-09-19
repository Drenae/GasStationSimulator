#pragma once
#include "CoreMinimal.h"
#include "House.h"
#include "JunkyardInspectArea.generated.h"

UCLASS(Blueprintable)
class GSS2_API AJunkyardInspectArea : public AHouse {
    GENERATED_BODY()
public:
    AJunkyardInspectArea(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInJunkyardArea();
    
};

