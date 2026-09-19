#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PartySpotLighting.generated.h"

UCLASS(Blueprintable)
class GSS2_API APartySpotLighting : public AActor {
    GENERATED_BODY()
public:
    APartySpotLighting(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopWorking();
    
    UFUNCTION(BlueprintCallable)
    void OnStartParty();
    
    UFUNCTION(BlueprintCallable)
    void CheckIfDancingTime();
    
};

