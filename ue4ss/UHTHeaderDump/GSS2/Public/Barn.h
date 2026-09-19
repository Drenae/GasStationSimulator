#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "Barn.generated.h"

UCLASS(Blueprintable)
class GSS2_API ABarn : public AInteractableBuilding {
    GENERATED_BODY()
public:
    ABarn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void AirportSandstormStarted();
    
};

