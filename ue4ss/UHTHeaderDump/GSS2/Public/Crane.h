#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "CameraChangedDelegate.h"
#include "CraneMoveSidewaysDelegate.h"
#include "HighlightsToggledDelegate.h"
#include "InputSetupDelegate.h"
#include "InteractableBuilding.h"
#include "SeanMagnetReachedLocationDelegate.h"
#include "Templates/SubclassOf.h"
#include "Crane.generated.h"

class AActor;
class UActionManagerSubsystem;
class UArrowComponent;
class UBoxComponent;
class UCraneAnimInstance;
class UCraneCamera;
class UMagnetArmComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UUserWidget;

UCLASS(Blueprintable)
class GSS2_API ACrane : public AInteractableBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMagnetActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideTooltips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideHighlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReservedBySean;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentCameraIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* MagnetArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* NpcEnteringPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* NpcMoveToPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* PlayerExitPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMagnetArmComponent* MagnetArmComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCraneMoveSideways OnCraneMoveSideways;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputSetup OnInputSetup;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeanMagnetReachedLocation OnSeanMagnetReachedLocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraChanged OnCameraChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHighlightsToggled OnHighlightsToggled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGamepadConnected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UnlockedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> WreckDeliveryCollisionZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraMinVerticalRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraMaxVerticalRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeactivateAnimInstanceDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeanMoveAcceptableDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeanMoveAcceptableYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeanDesiredZDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoArmDesiredZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoArmDesiredZAcceptableDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> CollisionChannelToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CyllinderActionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMinigameActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> MinigameWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* MinigameWidgetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CollisionMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCraneAnimInstance* CraneAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentCameraHorizontalRotateInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentCameraVerticalRotateInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SeanMovingToDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SeanResettingYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeliveryZoneOccupied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartedInZoneOccupied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SeanTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle DeactivateAnimInstanceTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCraneCamera*> Cameras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActionManagerSubsystem* ActionManagerSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* DeliveryCollisionZoneBox;
    
public:
    ACrane(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ToggleTooltipsVisiblity();
    
    UFUNCTION(BlueprintCallable)
    void ToggleHighlights();
    
    UFUNCTION(BlueprintCallable)
    void SetupInput();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTooltipsVisiblityEvent(bool NewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementEnabled(bool NewEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMinigameActive(bool bNewActive);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDeliveryZoneOccupied(bool IsZoneOccupied);
    
    UFUNCTION(BlueprintCallable)
    void SetCraneEnabled(bool NewEnabled, bool IsBeginPlay);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetActiveCamera(int32 CameraIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void SeanMoveMagnetToLocation(FVector TargetLocation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RotateCameraVerticalPad(float Value);
    
    UFUNCTION(BlueprintCallable)
    void RotateCameraVertical(float Value);
    
    UFUNCTION(BlueprintCallable)
    void RotateCameraHorizontalPad(float Value);
    
    UFUNCTION(BlueprintCallable)
    void RotateCameraHorizontal(float Value);
    
    UFUNCTION(BlueprintCallable)
    void ResetCarWrecks();
    
    UFUNCTION(BlueprintCallable)
    void OpenCloseShredder();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetMinigameActive(bool bNewActive);
    
    UFUNCTION(BlueprintCallable)
    void OnSeanExitCrane();
    
    UFUNCTION(BlueprintCallable)
    void OnSeanEnterCrane();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerInteraction();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnKeybindingsReset();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishGameLoaded(bool GameLoaded);
    
    UFUNCTION(BlueprintCallable)
    void MoveSideways(float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInsideDeliveryCollisionZone();
    
    UFUNCTION(BlueprintCallable)
    FVector GetMagnetToLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMinigameActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDeliveryZoneOccupied();
    
    UFUNCTION(BlueprintCallable)
    UCraneAnimInstance* GetAnimInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCraneCamera* GetActiveCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayCraneReservedBySeanError();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DeactivateAnimInstance();
    
    UFUNCTION(BlueprintCallable)
    void ClearInput();
    
    UFUNCTION(BlueprintCallable)
    void ChangeToNextCamera();
    
    UFUNCTION(BlueprintCallable)
    void CancelMinigame();
    
};

