#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "FireworkPipe.generated.h"

class UParticleSystemComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API AFireworkPipe : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleSystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PassedTime;
    
    AFireworkPipe(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StopWorking();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopFirework();
    
    UFUNCTION(BlueprintCallable)
    void OnStartParty();
    
    UFUNCTION(BlueprintCallable)
    void CheckIfDancingTime();
    
};

