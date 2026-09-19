#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PlayerAnimationManagerBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API UPlayerAnimationManagerBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPlayerAnimationManagerBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SecondBikerTrigger();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrologueEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FirstBikerTrigger();
    
};

