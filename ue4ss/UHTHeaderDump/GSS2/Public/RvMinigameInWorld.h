#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EGuestServiceDifficulty.h"
#include "ERVMinigameCameraBlendOutMode.h"
#include "ERVMinigameStage.h"
#include "RvMinigameAttachedHandleItemDelegate.h"
#include "RvMinigameDetachedHandleItemDelegate.h"
#include "RvMinigameEndedDelegate.h"
#include "RvMinigameLateEndDelegate.h"
#include "RvMinigameLateStartDelegate.h"
#include "RvMinigameStageInfo.h"
#include "RvMinigameStartedDelegate.h"
#include "RvMinigameInWorld.generated.h"

class AAttachmentPoint;
class AItem;
class ARvGuestServiceSpot;
class UArrowComponent;
class UCameraComponent;
class UCountdownWidget;
class URvMinigameBaseSettings;
class USceneComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API ARvMinigameInWorld : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MainSKM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshToAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ExtraVisualMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ExtraSKM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* PositioningArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ServiceTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableCrosshair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisablePlayerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowMouseCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTakePlayerControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERVMinigameCameraBlendOutMode BlendOutCameraMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCountdownWidget* CountdownWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGuestServiceDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERVMinigameStage MinigameStage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRvMinigameAttachedHandleItem OnAttachedHandleItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRvMinigameDetachedHandleItem OnDetachedHandleItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AItem* ItemBeingHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAttachmentPoint* AttachmentPoint;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRvMinigameStarted OnMinigameStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRvMinigameLateStart OnMinigameLateStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRvMinigameEnded OnMinigameEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRvMinigameLateEnd OnMinigameLateEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARvGuestServiceSpot* GuestServiceSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositioningAcceptanceDistance;
    
    ARvMinigameInWorld(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryToStartMinigame(ARvGuestServiceSpot* Service, EGuestServiceDifficulty ChosenDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void TryToEndMinigameWithScoringWithDelay();
    
    UFUNCTION(BlueprintCallable)
    void TryToEndMinigameWithScoring();
    
    UFUNCTION(BlueprintCallable)
    void TryToEndMinigameWithDelay(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    bool TryToEndMinigame(bool bSuccess);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartMinigameLate(ARvGuestServiceSpot* Service, EGuestServiceDifficulty ChosenDifficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartMiniGame(ARvGuestServiceSpot* Service, EGuestServiceDifficulty ChosenDifficulty);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPhase(FName Phase);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTipAction(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerSecondaryAction(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerPrimaryAction(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMoveRightAction(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMoveForwardAction(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftShoulderAction(bool bPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnJumpAction(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInspectModeAction(bool bPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGamepadModeToggle(bool bNewGamepadMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEscape(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDPadUpAction(bool bPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDPadRightAction(bool bPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDPadLeftAction(bool bPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDPadDownAction(bool bPressed);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAutomatationProcessStarted_CustomCode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAutomatationProcessEnded_CustomCode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamepadMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FRvMinigameStageInfo GetMinigameStageInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERVMinigameStage GetMinigameStage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URvMinigameBaseSettings* GetMinigameSettings() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndMinigameLate(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndMinigame(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void DetachHandleItemFromPoint();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckScore();
    
    UFUNCTION(BlueprintCallable)
    bool CanStartMinigame(ARvGuestServiceSpot* Service, EGuestServiceDifficulty ChosenDifficulty);
    
    UFUNCTION(BlueprintCallable)
    bool CanEndMinigame(bool bSuccess);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AttachHandleItemToPoint();
    
};

