#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "FuelPistolMagazineBase.generated.h"

UCLASS(Blueprintable)
class GSS2_API AFuelPistolMagazineBase : public AActor {
    GENERATED_BODY()
public:
    AFuelPistolMagazineBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UsePistol(AActor* UserActor);
    
};

