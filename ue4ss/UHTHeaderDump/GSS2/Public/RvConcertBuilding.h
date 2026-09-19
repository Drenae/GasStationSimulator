#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "RvConcertBuilding.generated.h"

UCLASS(Blueprintable)
class GSS2_API ARvConcertBuilding : public AInteractableBuilding {
    GENERATED_BODY()
public:
    ARvConcertBuilding(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopConcert();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartConcert();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoadConcert();
    
};

