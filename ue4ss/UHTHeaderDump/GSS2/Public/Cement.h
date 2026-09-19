#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Cement.generated.h"

class URenderTargetComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API ACement : public AActor {
    GENERATED_BODY()
public:
    ACement(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HighlightDirt();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UStaticMeshComponent* GetStaticMeshComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    URenderTargetComponent* GetRenderTargetComponent();
    
};

