#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SmokeMachine.generated.h"

class UNiagaraComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API ASmokeMachine : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* Smoke_ParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PassedTime;
    
    ASmokeMachine(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StopWorking();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartParty();
    
    UFUNCTION(BlueprintCallable)
    void CheckIfDancingTime();
    
};

