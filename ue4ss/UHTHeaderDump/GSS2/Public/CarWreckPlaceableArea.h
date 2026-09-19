#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "ECarWreckPlaceableAreaType.h"
#include "OnWreckPlacedDelegate.h"
#include "OnWreckTakenDelegate.h"
#include "CarWreckPlaceableArea.generated.h"

class AJunkyardCarWreck;
class AJunkyardManager;
class UActionManagerSubsystem;
class UArrowComponent;
class UBoxComponent;
class UGlobalEventSubsystem;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API ACarWreckPlaceableArea : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarWreckPlaceableAreaType AreaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasCraneMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepSnappedCarRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepPhysicsAfterSnap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CraneDroppableArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* MagnetDroppableSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MainMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MarkerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* WreckPlacementPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* SeanTeleportLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* SeanDanceLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AJunkyardCarWreck* CurrentWreck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExhibitionSlotIndex;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWreckPlaced OnWreckPlaced;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWreckTaken OnWreckTaken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlatformZRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAreaEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAreaLoadingWithWreck;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WreckSnapProgressSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisablePhysicsTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnablePhysicsTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisableOverlapsTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnapWreckCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckWreckAfterRemovingWheelsTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle EnablePhysicsTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle DisablePhysicsTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle DisableOverlapsTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle SnapWreckCooldownTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle LoadDisableTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle WheelsRemovedFromWreckTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WreckSnapProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCraneUsedByPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWaitingForLoadDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCraneUsedBySean;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReservedBySean;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSnapWreckCooldownActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGlobalEventSubsystem* GES;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActionManagerSubsystem* ActionManagerSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AJunkyardManager* JunkyardManager;
    
public:
    ACarWreckPlaceableArea(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SnapCurrentWreck(float ExtraPhysicsDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetReservedBySean(bool NewIsReservedBySean);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMarkerVisibility(bool IsVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAreaEnabled(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWreck();
    
    UFUNCTION(BlueprintCallable)
    void PlaceWreck(AActor* Wreck, bool ShouldSnap, float ExtraPhysicsDelay);
    
    UFUNCTION(BlueprintCallable)
    void OnWreckSpawnedOnArea(AActor* Wreck, float EnablePhysicsDelay);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWreckAttractedToMagnet();
    
    UFUNCTION(BlueprintCallable)
    void OnWheelsRemovedFromWreckTimerEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnWheelsRemovedFromWreck();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadedEnableArea();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadedDisableArea();
    
    UFUNCTION(BlueprintCallable)
    void OnCraneHighlightsToggled(bool Showighlights);
    
    UFUNCTION(BlueprintCallable)
    void OnCraneExited(bool ExitedyPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnCraneEntered(bool EnteredByPlayer);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAreaLoadedWithWreck(AActor* Wreck);
    
    UFUNCTION(BlueprintCallable)
    void OnAreaBeginLoadingWithWreck(AActor* Wreck);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnActorSnappedToMagnet(AActor* SnappedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorDetachedFromMagnet(AActor* DetachedActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadPlatformRotation(float LoadedZRotation);
    
    UFUNCTION(BlueprintCallable)
    bool IsWreckInTheAir();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsWreckAttachedToMagnet();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReservedBySean();
    
    UFUNCTION(BlueprintCallable)
    bool HasFallingWreckInDroppableArea();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndSnapWreckCooldown();
    
    UFUNCTION(BlueprintCallable)
    void EnablePhysicsAfterPlacement();
    
    UFUNCTION(BlueprintCallable)
    void DisablePhysicsAfterPlacement();
    
    UFUNCTION(BlueprintCallable)
    void DisableOverlapEvents();
    
    UFUNCTION(BlueprintCallable)
    bool CheckIfWreckStillOnArea();
    
    UFUNCTION(BlueprintCallable)
    void CheckForNewWreckOnArea(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDropActor(AActor* ActorToDrop);
    
};

