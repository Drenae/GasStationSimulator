#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Templates/SubclassOf.h"
#include "RuinSpawner.generated.h"

class ARuins;

UCLASS(Blueprintable)
class GSS2_API ARuinSpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARuins> RuinToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARuins* SpawnedRuin;
    
    ARuinSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TrySpawnRuin();
    
    UFUNCTION(BlueprintCallable)
    void DestroyRuin(AActor* DestroyedActor);
    
};

