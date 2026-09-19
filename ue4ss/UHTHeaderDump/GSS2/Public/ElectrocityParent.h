#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Electrocity.h"
#include "ElectrocityParent.generated.h"

UCLASS(Blueprintable)
class GSS2_API AElectrocityParent : public AActor, public IElectrocity {
    GENERATED_BODY()
public:
    AElectrocityParent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetElectrocity();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnableElectrocity(const bool On);
    

    // Fix for true pure virtual functions not being implemented
};

