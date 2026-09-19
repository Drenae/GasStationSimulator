#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EIceCreamFlavours.h"
#include "EIceCreamMakingState.h"
#include "EIceCreamPadTargetSection.h"
#include "FailedChangingGamepadTargetDelegate.h"
#include "IceCreamCones.h"
#include "IceCreamInfo.h"
#include "IceCreamOrders.h"
#include "IceCreamPadTargetStruct.h"
#include "InteractableBuilding.h"
#include "LoadedContainersInfo.h"
#include "OutlineInterface.h"
#include "SoldIceCreams.h"
#include "IceCreamBuilding.generated.h"

class AActor;
class AIceCreamCone;
class AIceCreamConeContainer;
class AIceCreamContainer;
class ASpoon;
class AStaticMeshActor;
class UArrowComponent;
class UBellAnimInstance;
class UCameraComponent;
class UChildActorComponent;
class UMaterialInstance;
class USkeletalMesh;
class USkeletalMeshComponent;
class USoundCue;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API AIceCreamBuilding : public AInteractableBuilding, public IOutlineInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OutlinedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIceCreamMakingState State;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFailedChangingGamepadTarget OnFailedChangingGamepadTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalComponentBell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* MinigameCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ContainersSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ConesSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* Light;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* LeftHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* RightHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* WaterBowl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ChainBell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ChainSmallCones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ChainMediumCones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ChainBigCones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ConeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ContainresInitialPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ContainersSpawnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BellAnimStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoopingStepSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceToUpdateScooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowScoopingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SpoonInBowlRotation;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> IceCreamFlavourMaterials[10];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UStaticMesh>> StandMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> BellMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UStaticMesh>> IceCreamConeMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIceCreamCones> ConeMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> IceCreamScoopMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AIceCreamContainer>> ContainerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AIceCreamCone> ConeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AIceCreamConeContainer> ConeContainerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASpoon> SpoonClass;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIceCreamInfo FlavourInfo[10];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CanOrderIceCreams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SoundScoopingLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SoundGrabCone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SoundReleaseCone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SoundFreezerLoopSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SoundFreezerLoopBig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SoundPlaceScoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SoundWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLoadedContainersInfo> LoadedContainersInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlacingScoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastSpoonLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStatusVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle StartHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* SpawnedScoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpoon* Spoon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIceCreamCone* PickedUpCone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIceCreamContainer* ScoopingContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoldIceCreams> IceCreamGivenToCustomer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIceCreamOrders> OrderList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBellAnimInstance* BellAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIceCreamContainer*> Containers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIceCreamConeContainer*> ConeContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIceCreamPadTargetStruct> GamepadTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GamepadIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MouseSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LeftHolderIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RightHolderIndex;
    
public:
    AIceCreamBuilding(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UseBell(bool bPressed);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateOrder();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UI_ShowTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UI_ShowNotify();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UI_OnStartMinigame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UI_OnRefreshOrder();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UI_OnOrderCheck(bool bShowInfo, const TArray<FIceCreamOrders>& UIOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UI_OnEndMinigame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UI_OnCannotTakeNextScoop();
    
    UFUNCTION(BlueprintCallable)
    FIceCreamInfo UI_GetFlavourInfo(EIceCreamFlavours Flavour);
    
private:
    UFUNCTION(BlueprintCallable)
    void SpoonCleaning(bool bPressed);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMinigameActive(bool bActive);
    
private:
    UFUNCTION(BlueprintCallable)
    void SecondaryAction(bool bPressed);
    
    UFUNCTION(BlueprintCallable)
    void RepopulateGamepadTargets();
    
    UFUNCTION(BlueprintCallable)
    void PrimaryAction(bool bPressed);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySoundScooping(bool bPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySoundIdleSmall(bool bPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySoundIdleBig(bool bPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayBellMontage();
    
private:
    UFUNCTION(BlueprintCallable)
    void PlaceScoopAction(bool bPressed);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpoonChanged(bool bVisibility);
    
private:
    UFUNCTION(BlueprintCallable)
    void MoveMouseUpDown(float Val);
    
    UFUNCTION(BlueprintCallable)
    void MoveMouseToPreviousSpot(bool bPressed);
    
    UFUNCTION(BlueprintCallable)
    void MoveMouseToPreviousSection(bool bPressed);
    
    UFUNCTION(BlueprintCallable)
    void MoveMouseToNextSpot(bool bPressed);
    
    UFUNCTION(BlueprintCallable)
    void MoveMouseToNextSection(bool bPressed);
    
    UFUNCTION(BlueprintCallable)
    void MoveMouseToNextGamepadLocation(bool bGoForward, bool bChangeSection);
    
    UFUNCTION(BlueprintCallable)
    void MoveMouseLeftRight(float Val);
    
    UFUNCTION(BlueprintCallable)
    void MoveGamepadIdx(bool bGoForward);
    
    UFUNCTION(BlueprintCallable)
    bool IsConeEmpty(int32 GamepadIndex);
    
    UFUNCTION(BlueprintCallable)
    void IncrementGamepadIdx();
    
    UFUNCTION(BlueprintCallable)
    EIceCreamPadTargetSection GetPreviousSection(EIceCreamPadTargetSection Section);
    
    UFUNCTION(BlueprintCallable)
    EIceCreamPadTargetSection GetNextSection(EIceCreamPadTargetSection Section);
    
public:
    UFUNCTION(BlueprintCallable)
    void FinishOrderEmployee();
    
private:
    UFUNCTION(BlueprintCallable)
    void ExitMinigameAction(bool bPressed);
    
    UFUNCTION(BlueprintCallable)
    void DecrementGamepadIdx();
    
    UFUNCTION(BlueprintCallable)
    void ConeRemoving(bool bPressed);
    
    UFUNCTION(BlueprintCallable)
    void CheckStatusAction(bool bPressed);
    
    UFUNCTION(BlueprintCallable)
    bool CanTakeNextScoop();
    
    UFUNCTION(BlueprintCallable)
    void CalculateNextGamepadLocation(bool bGoForward, bool bChangeSection);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    void SetOutline(bool bShouldBeOutlined) override PURE_VIRTUAL(SetOutline,);
    
};

