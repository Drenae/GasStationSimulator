#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "GameAction.h"
#include "OnObjectiveMarkerSpawnedDelegate.h"
#include "SpawnObjectiveMarkerGameAction.generated.h"

class AActor;
class AObjectiveMarker;
class UActiveQuestLine;
class UObjectiveBase;
class UQuestSubsystem;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API USpawnObjectiveMarkerGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AObjectiveMarker> MarkerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SpawnTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ChildActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Outline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Marker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DestroyMarkerAfterObjectiveIsFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveMarkerSpawned OnObjectiveMarkerSpawned;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AObjectiveMarker* MarkerInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectiveBase* ParentObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestSubsystem* QuestSubsystem;
    
public:
    USpawnObjectiveMarkerGameAction();

protected:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveFinished(UObjectiveBase* ObjectiveFinished);
    
    UFUNCTION(BlueprintCallable)
    void OnNewQuestLineFollowed(UActiveQuestLine* FollowedQuestLine);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AObjectiveMarker* GetMarkerInstance() const;
    
};

