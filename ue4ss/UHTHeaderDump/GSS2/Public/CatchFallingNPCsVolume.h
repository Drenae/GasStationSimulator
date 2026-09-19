#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "CatchFallingNPCsVolume.generated.h"

class AActor;

UCLASS(Blueprintable)
class GSS2_API ACatchFallingNPCsVolume : public AVolume {
    GENERATED_BODY()
public:
    ACatchFallingNPCsVolume(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    
};

