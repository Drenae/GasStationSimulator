#pragma once
#include "CoreMinimal.h"
#include "ObjectiveBase.h"
#include "ClearRuinsObjective.generated.h"

class AObjectiveMarker;
class ARuins;
class USpawnObjectiveMarkerGameAction;

UCLASS(Blueprintable)
class GSS2_API UClearRuinsObjective : public UObjectiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateObjectiveMarkerOnEachRuin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AObjectiveMarker> MarkerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ARuins>> RuinsToClear;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USpawnObjectiveMarkerGameAction*> GameActions;
    
public:
    UClearRuinsObjective();

protected:
    UFUNCTION(BlueprintCallable)
    void OnRuinsRemoved(ARuins* Ruins);
    
    UFUNCTION(BlueprintCallable)
    void OnRuinLoaded(int32 RuinIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnMarkerSpawned(AObjectiveMarker* ObjectiveMarker);
    
};

