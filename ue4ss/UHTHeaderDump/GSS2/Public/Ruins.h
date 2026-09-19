#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Interaction.h"
#include "Templates/SubclassOf.h"
#include "Ruins.generated.h"

class AGSSPlayerCharacter;
class AProjectileActor;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API ARuins : public AActor, public IInteraction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RuinMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectileActor> RuinsProjectileActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Stage;
    
    ARuins(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRuins(int32 CurrentStage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartMiniGame(AGSSPlayerCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnTrash();
    
    UFUNCTION(BlueprintCallable)
    void SetStageLevel(int32 NewStage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStageLevel();
    
    UFUNCTION(BlueprintCallable)
    bool AddRemoveRuinLevel(int32 Levels, AGSSPlayerCharacter* PlayerCharacter);
    

    // Fix for true pure virtual functions not being implemented
};

