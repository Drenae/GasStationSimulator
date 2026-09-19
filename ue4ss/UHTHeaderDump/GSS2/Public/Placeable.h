#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "Placeable.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class GSS2_API UPlaceable : public UInterface {
    GENERATED_BODY()
};

class GSS2_API IPlaceable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableGhostMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CanBeSpawned(const bool bCompatibile, const TArray<AActor*>& OverlapedElements, const FName& Reason);
    
};

