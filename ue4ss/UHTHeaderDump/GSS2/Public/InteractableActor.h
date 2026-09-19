#pragma once
#include "CoreMinimal.h"
#include "ChangeActorLevelSingatureDelegate.h"
#include "EBuildingType.h"
#include "EQueueType.h"
#include "ETaskResult.h"
#include "EmployeeLeftQueueDelegate.h"
#include "Item.h"
#include "OnQueueUpdatedDelegate.h"
#include "WayPoint.h"
#include "InteractableActor.generated.h"

class AAICharacterBase;
class APathPoint;
class APathStation;
class UArrowComponent;
class UEventDisplay;
class UGameAction;

UCLASS(Blueprintable)
class GSS2_API AInteractableActor : public AItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APathStation*> PathStations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWayPoint> Waypoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWayPoint> DefaultWayPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RotateToActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildingType BuildingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEmployeeUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActorLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentActorLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InWayPointAcceptanceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InPathPointAcceptanceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQueueType QueueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadingFromSaveGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQueueUpdated OnQueueUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeActorLevelSingature OnActorLevelChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmployeeLeftQueue OnEmployeeLeftQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APathPoint*> PathPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* EmployeeePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWayPoint EmployeeeWayPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MapsToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MapsToUnload;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoadUUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnloadUUID;
    
public:
    AInteractableActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdatePathStations();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePath();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateMesh(const int32 ActorLevel, bool bLoadedFromSaveGame, bool bNewVersion);
    
private:
    UFUNCTION(BlueprintCallable)
    void UnlockItems(TArray<TSoftClassPtr<AItem>> ItemsToUnlock);
    
public:
    UFUNCTION(BlueprintCallable)
    void UnloadMaps();
    
    UFUNCTION(BlueprintCallable)
    void SortWayPoints(TArray<FWayPoint>& OutArray);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNewAdditionalFeature(const FString& FeautureName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActorLevel(int32 Level, bool bLoadedFromSaveGame, bool bNewVersion);
    
    UFUNCTION(BlueprintCallable)
    void ResetQueue();
    
    UFUNCTION(BlueprintCallable)
    void PostLoadMapsEvent(bool bLoadedFromSave);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostLoadMapsBlueprintEvent();
    
private:
    UFUNCTION(BlueprintCallable)
    void PerformUpgradeActions(TArray<UGameAction*> UpgradeActions);
    
    UFUNCTION(BlueprintCallable)
    void OnEventAndItemsLoaded(TSoftClassPtr<UEventDisplay> EventDisplayToLoad, TArray<TSoftClassPtr<AItem>> ItemsToUnlock, TArray<UGameAction*> UpgradeActions);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEditedActor(const FString& Reason);
    
    UFUNCTION(BlueprintCallable)
    void LoadMaps(bool bLoadedFromSave);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoadGameBeginPlay(bool bLoadedFromSaveGame, bool NewVersion);
    
private:
    UFUNCTION(BlueprintCallable)
    void LoadAndPlayEventDisplay(TSoftClassPtr<UEventDisplay> EventDisplayToLoad);
    
public:
    UFUNCTION(BlueprintCallable)
    bool LeaveQueue(AAICharacterBase* AICharacter, ETaskResult TaskState, bool ContinueWaiting, bool ForceLeave);
    
    UFUNCTION(BlueprintCallable)
    FWayPoint LeaveEmployee(AAICharacterBase* AICharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVehicleInHisPathPoint(AAICharacterBase* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQueueInTheirsPathPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQueueFull();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMaxActorLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorInHisWayPoint(AAICharacterBase* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyAvailablePathPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetQueueDetails(int32& NumberOfPeopleInQueue, int32& NumberOfPeopleWaiting, int32& NumberOfPeopleOnTheirWay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPeopleInQueue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAICharacterBase* GetCurrentUser();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAICharacterBase* GetCurrentEmployee();
    
    UFUNCTION(BlueprintCallable)
    void GetBuildingDataToLoad_Unload(bool bLoadedFromSaveGame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActorLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWayPoint FindCharacter(AAICharacterBase* AICharacterBase);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckIfCanBuyAddtionalFeauture(const FString& FeautureName, int32 Level);
    
    UFUNCTION(BlueprintCallable)
    int32 AddToQueue(AAICharacterBase* AICharacterBase);
    
    UFUNCTION(BlueprintCallable)
    FWayPoint AddEmployee(AAICharacterBase* AICharacterBase, bool& Added);
    
};

