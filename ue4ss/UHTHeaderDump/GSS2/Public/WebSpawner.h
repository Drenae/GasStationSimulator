#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SpiderWebPosition.h"
#include "WebSpawner.generated.h"

class ASpiderWebBase;

UCLASS(Blueprintable)
class GSS2_API AWebSpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpiderWebPosition> RequiredLevelMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASpiderWebBase*> SpawnedWebs;
    
    AWebSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRequiredLevelMap(TArray<FSpiderWebPosition> InRequiredLevelMap);
    
    UFUNCTION(BlueprintCallable)
    void SetArrayStructByIndex(ASpiderWebBase* SpawnedWeb, bool bIsOccupied, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveInvalidSpiderWebsFromArray();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLevelUpgraded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASpiderWebBase*> GetSpawnedWebs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSpiderWebPosition> GetRequiredLevelMap();
    
    UFUNCTION(BlueprintCallable)
    void AddToSpawnedWebs(ASpiderWebBase* ToAdd);
    
};

