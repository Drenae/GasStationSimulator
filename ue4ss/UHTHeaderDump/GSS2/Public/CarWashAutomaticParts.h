#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DidEndAutomaticWashingDelegate.h"
#include "StartAutomaticWashingDelegate.h"
#include "CarWashAutomaticParts.generated.h"

UCLASS(Blueprintable)
class GSS2_API ACarWashAutomaticParts : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDidEndAutomaticWashing DidEndAutomaticWashingDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartAutomaticWashing OnStartAutomaticWashing;
    
    ACarWashAutomaticParts(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartAutomaticWashing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetAutoCarWashPartsCollision(bool bNewCollision);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DidEndAutomaticWashing();
    
};

