#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "InteractionInfo.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UInteractionInfo : public UInterface {
    GENERATED_BODY()
};

class IInteractionInfo : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName GetInteractionName();
    
};

