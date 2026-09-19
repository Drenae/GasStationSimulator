#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "Electrocity.generated.h"

UINTERFACE(Blueprintable)
class GSS2_API UElectrocity : public UInterface {
    GENERATED_BODY()
};

class GSS2_API IElectrocity : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetElectrocity();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableElectrocity(const bool On);
    
};

