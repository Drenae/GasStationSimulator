#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "FixingTape.generated.h"

UCLASS(Blueprintable)
class GSS2_API AFixingTape : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveTape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCutTape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineLength;
    
    AFixingTape(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TapeCutting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SplineMeshFunctionalities();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoveTapeFunction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecalFunctionalities();
    
};

