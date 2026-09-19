#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SaunaDot.generated.h"

class ARvMinigameInWorld_Sauna;

UCLASS(Blueprintable)
class GSS2_API ASaunaDot : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARvMinigameInWorld_Sauna* MinigameInWorldSauna;
    
    ASaunaDot(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSplineTime() const;
    
};

