#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "CarPartData.h"
#include "ECarWreckMarking.h"
#include "ECarWreckMarkingError.h"
#include "ECarWreckPlaceableAreaType.h"
#include "ECarWreckState.h"
#include "EJunkyardCarPartType.h"
#include "EJunkyardCarWreckType.h"
#include "EJunkyardPartRarity.h"
#include "Interaction.h"
#include "MagnetForce.h"
#include "OnAttractedToMagnetDelegate.h"
#include "OnCarWreckPartHoveredDelegate.h"
#include "OnFullyLoadedFromSaveDelegate.h"
#include "OnInspectModeEnteredDelegate.h"
#include "OnPlannedDecalChangedDelegate.h"
#include "OnPlannedPaintChangedDelegate.h"
#include "OnPlannedPartChangedDelegate.h"
#include "OnStateChangedDelegate.h"
#include "OnWheelsRemovedDelegate.h"
#include "OnWreckModifiedDelegate.h"
#include "StorageCarPart.h"
#include "JunkyardCarWreck.generated.h"

class ACarWreckPlaceableArea;
class ACarWreck_Tooltip;
class AGSSPlayerCharacter;
class AJunkyardManager;
class APawn;
class UActionManagerSubsystem;
class UActorComponent;
class UArrowComponent;
class UBoxComponent;
class UGlobalEventSubsystem;
class UJunkyardCarPartCustomizable;
class UJunkyardWrecksDataAsset;
class UMaterialInterface;
class UNPSmartObjectComponent;
class UPrimitiveComponent;
class UStaticMeshComponent;
class UWidgetComponent;

UCLASS(Blueprintable)
class GSS2_API AJunkyardCarWreck : public AActor, public IMagnetForce, public IInteraction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MainMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RoofMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* TrunkMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* UnderbodyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Battery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* sparkplug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FrontWheels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BackWheels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* mirrors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* spoiler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* exhaust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* turbo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Engine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* InteractBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* MagnetSnapBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* MagnetTraceBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* SeanTaskPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* MarkerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNPSmartObjectComponent* NPSmartObjectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EJunkyardCarPartType, UActorComponent*> CarPartComponentSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AttachedActorsForMagnet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WreckName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardPartRarity CarTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardCarWreckType WreckType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor RustColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRusty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBeingDelivered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTmpMagnetAttractionDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BasePrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CustomizationMaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisablePhysicsTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableCollisionSounds;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCarWreckPartHovered OnCarWreckPartHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWreckModified OnWreckModified;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttractedToMagnet OnAttractedToMagnet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInspectModeEntered OnInspectModeEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWheelsRemoved OnWheelsRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFullyLoadedFromSave OnFullyLoadedFromSave;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlannedPaintChanged OnPlannedPaintChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlannedDecalChanged OnPlannedDecalChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlannedPartChanged OnPlannedPartChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UJunkyardWrecksDataAsset* WrecksSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisableOverlapsTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerDisplayDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TowTruckOffsetNoWheels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TowTruckOffsetAllWheels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TowTruckOffsetFrontWheels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TowTruckOffsetBackWheels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle DisableOverlapsTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReservedBySean;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWrenchBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReservedByPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMarkerVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCraneUsedByPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadingAttachedToCrane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBoundCraneEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInspectMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarWreckState CarWreckState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarWreckMarking CurrentMarking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarWreckPlaceableAreaType PlaceableAreaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle DisablePhysicsTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActionManagerSubsystem* ActionManagerSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AJunkyardManager* JunkyardManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSPlayerCharacter* PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGlobalEventSubsystem* GES;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> WheelMeshes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACarWreck_Tooltip* SpawnedWreckTooltip;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateChanged OnStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanGetAttractedByMagnet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttractedByMagnetResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaMissedCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowAllSpotsOccupiedMessageCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACarWreckPlaceableArea* LastDropClosestArea;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle AreaMissedCheckTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle AttractedByMagnetResetTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAttractedByMagnet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PhotoPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInteractionInfoDisplayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle DisableInteractionInfoDelayTimer;
    
public:
    AJunkyardCarWreck(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateCustomizablePartTierOnlyMaterial(EJunkyardCarPartType Slot, EJunkyardPartRarity Rarity);
    
    UFUNCTION(BlueprintCallable)
    void TryFinishProject();
    
    UFUNCTION(BlueprintCallable)
    void StartCustomInteraction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SimpleInteraction(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent);
    
    UFUNCTION(BlueprintCallable)
    void ShowReservedBySeanMessage();
    
    UFUNCTION(BlueprintCallable)
    void SetWholeWreckHighlightVisibility(bool NewVisibility, int32 StencilValue, bool bParts);
    
    UFUNCTION(BlueprintCallable)
    void SetState(ECarWreckState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetReservedBySean(bool NewIsReservedBySean);
    
    UFUNCTION(BlueprintCallable)
    void SetReservedByPlayer(bool NewIsReservedByPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaceableAreaType(ECarWreckPlaceableAreaType NewPlaceableAreaType);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsEnabled(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPhotoPath(const FString& InPhotoPath);
    
    UFUNCTION(BlueprintCallable)
    void SetMobility(bool IsMobile);
    
    UFUNCTION(BlueprintCallable)
    void SetLockPhysics(bool IsLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsHeldByMagnet(bool NewIsHeldByMagnet);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentMarking(ECarWreckMarking NewMarking, bool IgnoreSeanReservation, bool LoadingGame);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetCraneMarkerVisibility(bool IsVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAllCollisionsEnabled(bool IsEnabled);
    
private:
    UFUNCTION(BlueprintCallable)
    void ResetAttractedByMagnet();
    
public:
    UFUNCTION(BlueprintCallable)
    void RemovePartFromSlot(EJunkyardCarPartType Slot, bool bApplyEffect);
    
    UFUNCTION(BlueprintCallable)
    void RefreshMaterialForPartInSlot(const EJunkyardCarPartType& Slot, bool bGhost, bool bSynchronously);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayEventOnDeattached();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCollisionSoundManually();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWheelsHitEvent(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnWheelsHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetCollisionSounds();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEnterInspectMode(bool bPressed);
    
    UFUNCTION(BlueprintCallable)
    void OnPartInteracted(const EJunkyardCarPartType& Slot);
    
    UFUNCTION(BlueprintCallable)
    void OnMinigameStateChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnMinigameResult(bool Result, EJunkyardCarPartType Slot, FStorageCarPart PartStruct);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInteractBoxOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInteractBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCraneHighlightsToggled(bool Showighlights);
    
    UFUNCTION(BlueprintCallable)
    void OnCraneExited(bool ExitedyPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnCraneEntered(bool EnteredByPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnCarPartMouseOver(bool bHovered, EJunkyardCarPartType CarPartSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttractedToMagnetEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnActorSnappedToMagnet(AActor* SnappedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorDetachedFromMagnet(AActor* DetachedActor);
    
    UFUNCTION(BlueprintCallable)
    void LoadAttachedToCrane();
    
    UFUNCTION(BlueprintCallable)
    bool IsSpecificMarkingPossible(ECarWreckMarking Marking, ECarWreckMarkingError& MarkingError);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReservedBySean();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReservedByPlayer();
    
    UFUNCTION(BlueprintCallable)
    bool IsOtherWreckAttachedToMagnet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnWreckSpot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnPlatform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnExhibitionSpot() const;
    
    UFUNCTION(BlueprintCallable)
    void HighlightPartsForInspectMode(bool bGhosts, bool bHighlight);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasCustomSetPhysicsEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCarPartData GetWreckAverageStats(FStorageCarPart OptionalModifier);
    
    UFUNCTION(BlueprintCallable)
    ECarWreckState GetState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPrimitiveComponent* GetPrimitiveToApplyFore();
    
    UFUNCTION(BlueprintCallable)
    ECarWreckPlaceableAreaType GetPlaceableAreaType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPhotoPath();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsHeldByMagnet();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsAttractedByMagnet();
    
    UFUNCTION(BlueprintCallable)
    ECarWreckMarking GetCurrentMarking();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPrimitiveComponent* GetAttractedPrimitive();
    
    UFUNCTION(BlueprintCallable)
    TArray<UActorComponent*> GetAllInstalledParts();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DisplayInteractionInfo(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent, UStaticMeshComponent*& StaticMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void DisassembleAllParts();
    
    UFUNCTION(BlueprintCallable)
    void DisableOverlapEvents();
    
private:
    UFUNCTION(BlueprintCallable)
    void DisableInteractionInfoDelayed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisableInteractionInfo(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void DestroyWreckTooltip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CustomSetPhysicsEnabled(bool IsPhysicsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void CreateCarParts();
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckIfAreaMissed();
    
public:
    UFUNCTION(BlueprintCallable)
    bool CanWreckBeMovedByPlayer();
    
    UFUNCTION(BlueprintCallable)
    bool CanRemoveAllParts(bool& NoSpaceGarage, bool& NoSpaceJunkyard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCollisionSoundsBePlayed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeInteractable(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanActorGetAttracted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateWreckBasePrice(FStorageCarPart OptionalModifier, bool bIncludeTribute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllMountablePartsPlannedOrInstalled() const;
    
    UFUNCTION(BlueprintCallable)
    UJunkyardCarPartCustomizable* AddPartToSlot(TSoftClassPtr<UActorComponent> PartComponentClass, EJunkyardCarPartType Slot, bool bVisible, EJunkyardPartRarity Tier);
    

    // Fix for true pure virtual functions not being implemented
};

