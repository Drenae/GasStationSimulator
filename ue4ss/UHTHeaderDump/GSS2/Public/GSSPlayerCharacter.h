#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EObjectTypeQuery -FallbackName=EObjectTypeQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "AButtonActionDelegate.h"
#include "BButtonActionDelegate.h"
#include "ChangedTableSettingDelegate.h"
#include "CircularMenuInteractionDelegate.h"
#include "DPadDownActionDelegate.h"
#include "DPadLeftActionDelegate.h"
#include "DPadRightActionDelegate.h"
#include "DPadUpActionDelegate.h"
#include "ECharacterState.h"
#include "ECircularMenuChoice.h"
#include "EHoldButton.h"
#include "EMovementState.h"
#include "EPlayerState.h"
#include "E_ActionDelegate.h"
#include "EscapeActionDelegate.h"
#include "GSSCharacterBase.h"
#include "GameplaySettingsAppliedDelegate.h"
#include "HighlightAirplaneHolesDelegate.h"
#include "HighlightCinemaTrashDelegate.h"
#include "InspectModeActionDelegate.h"
#include "InteractionFDelegate.h"
#include "InteractionRDelegate.h"
#include "JumpActionDelegate.h"
#include "LeftBumperActionDelegate.h"
#include "LeftTriggerActionDelegate.h"
#include "LookUpActionDelegate.h"
#include "MinigameAction01Delegate.h"
#include "MouseMoveRawYDelegate.h"
#include "MoveForwardActionDelegate.h"
#include "MoveRightActionDelegate.h"
#include "OnHideInteractionDelegate.h"
#include "OnHoldInteractionEndDelegate.h"
#include "OnHoldInteractionStartDelegate.h"
#include "OnPlayerMovedDelegate.h"
#include "OnPlayerPositionResetDelegate.h"
#include "OnShowInteractionDelegate.h"
#include "OnThrowStartDelegate.h"
#include "OnTicketValidatedDelegate.h"
#include "OnToolSelectedDelegate.h"
#include "OnUIConfirmedDelegate.h"
#include "OnUIRejectedDelegate.h"
#include "PartTooltip.h"
#include "PickUpPlayerActorDelegate.h"
#include "PlayerEnteredFerrisCabinDelegate.h"
#include "PlayerLeftFerrisCabinDelegate.h"
#include "PrimaryActionCheckDelegate.h"
#include "PrimaryActionDelegate.h"
#include "QuestlineActionDelegate.h"
#include "RightBumperActionDelegate.h"
#include "RightTriggerActionDelegate.h"
#include "RotateLeftActionDelegate.h"
#include "RotateRightActionDelegate.h"
#include "SecondaryActionDelegate.h"
#include "SetPhotoModeActiveDelegate.h"
#include "SpawnPlayerActorDelegate.h"
#include "SprintActionDelegate.h"
#include "Templates/SubclassOf.h"
#include "TipActionDelegate.h"
#include "ToggleSnapToGridDelegate.h"
#include "TurnActionDelegate.h"
#include "XButtonActionDelegate.h"
#include "YButtonActionDelegate.h"
#include "eTicketState.h"
#include "GSSPlayerCharacter.generated.h"

class AAICharacterBase;
class AActor;
class AGSSGameState;
class AGSSPlayerController;
class AInteractableActor;
class AItem;
class UAnalyticsDataCollectorComponent;
class UArrowComponent;
class UAudioComponent;
class UBoxComponent;
class UCameraComponent;
class UDataTable;
class UEconomyTracker;
class UGSSOverlay;
class UInventoryComponent;
class UJunkyardCarPartBase;
class UKeyItemWidget;
class UPhysicsHandleComponent;
class UPostapoSkeletalMeshComponent;
class UPrimitiveComponent;
class USoundBase;
class USoundCue;
class USpringArmComponent;
class UStatKeeper;
class UTechTreeManager;
class UUserWidget;

UCLASS(Abstract, Blueprintable)
class AGSSPlayerCharacter : public AGSSCharacterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* InteractBox;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementState ActiveMovementState;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnPlayerActor OnPlayerActorSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickUpPlayerActor OnPlayerPickUped;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetPhotoModeActive OnSetPhotoModeActive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigameAction01 OnPlayerMinigameAction01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHighlightAirplaneHoles OnHighlightAirplaneHoles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHighlightCinemaTrash OnHighlightCinemaTrash;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnThrowStart ThrowStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHoldInteractionStart OnHoldInteractionStartEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHoldInteractionEnd OnHoldInteractionEndEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAction OnPlayerPrimaryAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryActionCheck OnPlayerPrimaryActionCheck;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSecondaryAction OnPlayerSecondaryAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionF OnPlayerInteractionF;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionR OnPlayerInteractionR;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FToggleSnapToGrid OnToggleSnapToGrid;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJumpAction OnJumpAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSprintAction OnSprintAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInspectModeAction OnInspectModeAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoveForwardAction OnMoveForward;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnToolSelected OnToolSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerPositionReset OnPlayerReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowInteraction OnShowInteraction;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHideInteraction OnHideInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTurnAction OnPlayerTurnAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMouseMoveRawY OnMouseMoveRawY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoveRightAction OnMoveRightAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FE_Action OnE_Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoveRightAction OnMoveMarshalWandsAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerMoved OnPlayerMoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookUpAction OnPlayerLookUpAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotateRightAction OnRotateRightAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotateLeftAction OnRotateLeftAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLeftTriggerAction OnLeftTriggerAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRightTriggerAction OnRightTriggerAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYButtonAction OnYButtonAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEscapeAction OnEscapeAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTipAction OnTipAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestlineAction OnQuestlineAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FXButtonAction OnXButtonAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBButtonAction OnBButtonAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAButtonAction OnAButtonAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDPadRightAction OnDPadRightAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDPadUpAction OnDPadUpAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDPadLeftAction OnDPadLeftAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDPadDownAction OnDPadDownAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLeftBumperAction OnLeftBumperAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRightBumperAction OnRightBumperAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplaySettingsApplied OnGameplaySettingsApplied;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangedTableSetting OnChangedTableSetting;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerEnteredFerrisCabin OnPlayerEnteredFerrisCabin;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerLeftFerrisCabin OnPlayerLeftFerrisCabin;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUIRejected OnUIRejected;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUIConfirmed OnUIConfirmed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTicketValidated OnTicketValidated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* FirstPersonCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* SpringArmComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostapoSkeletalMeshComponent* BaseBodyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostapoSkeletalMeshComponent* Hands_SMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostapoSkeletalMeshComponent* Legs_SMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* HandlePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* HeldGrinderPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsHandleComponent* PhysicsHandleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSGameState* GameState_GSS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSPlayerController* GSSPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatKeeper* StatKeeper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEconomyTracker* EconomyTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerState CharacterState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterState CharacterMinigameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PreviewActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> RemoveItemFromHandInteractions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseLookUpRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsingMotionControllers: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RMBTimeHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeQuestlineHoldTimeCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeQuestlineHoldTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LMBTimeHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FTimeHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRMBPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLMBPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeQuestlinePressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInTutorialReading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LavaJumpStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRocketJumpEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRocketJumpExplosionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RocketJumpZPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RocketJumpXYPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RocketJumpAirControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RocketJumpAirControlDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DefaultKeyboardInputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DefaultGamepadInputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DefaultKeyboardInputAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DefaultGamepadInputAxis;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCircularMenuInteraction OnCircularMenuInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGamepadModeActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* CurInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTechTreeManager* TechTreeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTechTreeManager> TechTreeManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInspectModeOn;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreventCharacterMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreventCameraMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> DefaultTraceTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> TraceTypesWithHandleActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraSpeedX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraSpeedY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRumble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToogleSprintMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToogleInspectMode;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnLadder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKeyItemWidget* BindWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DisplayedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* DisplayedComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* UIActionsAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ObjectiveSwitchSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnalyticsDataCollectorComponent* AnalyticsDataCollectorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInFerrisCabin;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UUserWidget> PauseMenu;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartTooltip TooltipPart;
    
    AGSSPlayerCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void YButton_Released();
    
    UFUNCTION(BlueprintCallable)
    void YButton_Presssed();
    
    UFUNCTION(BlueprintCallable)
    void XButton_Released();
    
    UFUNCTION(BlueprintCallable)
    void XButton_Presssed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void TryToStartHoldingInteractions(EHoldButton ButtonToHold);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToolSelection(int32 ToolNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void ToggleStatDebug();
    
    UFUNCTION(BlueprintCallable)
    void ToggleSnapToGridAction_Released();
    
    UFUNCTION(BlueprintCallable)
    void ToggleSnapToGridAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void ToggleEventDebug();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void ToggleEconomyDebug();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void ToggleCarWashDebug();
    
    UFUNCTION(BlueprintCallable)
    void TipAction_Released();
    
    UFUNCTION(BlueprintCallable)
    void TipAction_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StatAchievementHandling(const FName StatAPIName, float ProgressAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartCinemaInteraction(eTicketState InputTicketState, AAICharacterBase* TargetNPC);
    
    UFUNCTION(BlueprintCallable)
    void SprintAction_ToggleRelease();
    
    UFUNCTION(BlueprintCallable)
    void SprintAction_Toggle();
    
    UFUNCTION(BlueprintCallable)
    void SprintAction_Released();
    
    UFUNCTION(BlueprintCallable)
    void SprintAction_Pressed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnTool(ECircularMenuChoice ToolChoice);
    
public:
    UFUNCTION(BlueprintCallable)
    AItem* SpawnPlayerItem(TSubclassOf<AItem> ItemClass, bool AsPublic, FTransform SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    AInteractableActor* SpawnInteractableActor(AInteractableActor* InteractableActor);
    
    UFUNCTION(BlueprintCallable)
    AInteractableActor* SpawnGhostInteractableActor(TSubclassOf<AInteractableActor> AInteractableActorClass);
    
    UFUNCTION(BlueprintCallable)
    void SetTooltipPart(FPartTooltip TooltipToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetPreventCharacterMovement(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPreventCameraMovement(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPauseMenu(UUserWidget* NewPauseMenu);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementState(EMovementState NewMovementState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMouseWidgetInteraction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void SetJoeCrashTime(int32 Hours);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInPhotoMode(bool IsInPhotoMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHudVisibilityWithOptions(bool IsHudHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDefaultWidgetInteraction();
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterState(ECharacterState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SecondaryAction_Released();
    
    UFUNCTION(BlueprintCallable)
    void SecondaryAction();
    
    UFUNCTION(BlueprintCallable)
    void RotateRight_Released();
    
    UFUNCTION(BlueprintCallable)
    void RotateRight_Presssed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RotatePlayerToActorOrLocation(AActor* ActorTarget, FVector PositionToLookAt);
    
public:
    UFUNCTION(BlueprintCallable)
    void RotateLeft_Released();
    
    UFUNCTION(BlueprintCallable)
    void RotateLeft_Presssed();
    
    UFUNCTION(BlueprintCallable)
    void RightTrigger_Released();
    
    UFUNCTION(BlueprintCallable)
    void RightTrigger_Presssed();
    
    UFUNCTION(BlueprintCallable)
    void RightBumper_Released();
    
    UFUNCTION(BlueprintCallable)
    void RightBumper_Presssed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetUnboundInputs();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetPlayerPosition();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseHeldItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrologWakeUpEvent();
    
    UFUNCTION(BlueprintCallable)
    void PrimaryAction_Released();
    
    UFUNCTION(BlueprintCallable)
    void PrimaryAction();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayUiSound(USoundCue* UiSound);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerTraceLine(bool& Hit, AActor*& HitActor, UPrimitiveComponent*& HitComponent, FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStepIntoLava();
    
    UFUNCTION(BlueprintCallable)
    void OnGamePadSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEscapeClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCannonExplosion(FVector ExplosionLocation, AActor* HitActor);
    
    UFUNCTION(BlueprintCallable)
    void OnAppliedSoundSettings();
    
    UFUNCTION(BlueprintCallable)
    void OnAppliedGameplaySettings();
    
    UFUNCTION(BlueprintCallable)
    void OnAppliedControlSettings();
    
protected:
    UFUNCTION(BlueprintCallable)
    void MoveMarshalWands(float Val);
    
    UFUNCTION(BlueprintCallable)
    void Minigame_Action01_Released();
    
    UFUNCTION(BlueprintCallable)
    void Minigame_Action01_Pressed();
    
public:
    UFUNCTION(BlueprintCallable)
    void LeftTrigger_Released();
    
    UFUNCTION(BlueprintCallable)
    void LeftTrigger_Presssed();
    
    UFUNCTION(BlueprintCallable)
    void LeftBumper_Released();
    
    UFUNCTION(BlueprintCallable)
    void LeftBumper_Presssed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPartHovered(UJunkyardCarPartBase* PartToCheck);
    
    UFUNCTION(BlueprintCallable)
    bool IsHoldComponent(const UPrimitiveComponent* Other) const;
    
    UFUNCTION(BlueprintCallable)
    void InspectModeAction_Released();
    
    UFUNCTION(BlueprintCallable)
    void InspectModeAction_Pressed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HighlightCinemaTrash_Released();
    
    UFUNCTION(BlueprintCallable)
    void HighlightCinemaTrash_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void HighlightAirplaneHoles_Released();
    
    UFUNCTION(BlueprintCallable)
    void HighlightAirplaneHoles_Pressed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideWholeUI();
    
    UFUNCTION(BlueprintCallable)
    void HideTooltipPart();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HideCircularMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOpeningOfToolMenu();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TEnumAsByte<EObjectTypeQuery>> GetTraceTypes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStatKeeper* GetStatKeeper();
    
    UFUNCTION(BlueprintCallable)
    bool GetPreventCharacterMovement();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UGSSOverlay* GetPlayerOverlay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerInputStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetPauseMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSprinting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInPhotoMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsHandleActorEqualBYSoftClass(TSoftClassPtr<AItem> ClassToCompare);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsHandleActorEqualBYClass(UClass* ClassToCompare);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsHandleActor_Product();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsHandleActor_KeyItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGamepadModeActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEconomyTracker* GetEconomyTracker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPartTooltip GetCurrentPartTooltip();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceStopGaragePartsPreview();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceOutline();
    
    UFUNCTION(BlueprintCallable)
    void FollowQuestlineReleased();
    
    UFUNCTION(BlueprintCallable)
    void FollowQuestlinePressed();
    
    UFUNCTION(BlueprintCallable)
    void EscapeAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndCinemaInteraction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableWidgetInteractionDebugDot(bool bShowRedDot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AItem* EditItem(AItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void E_ActionPressed();
    
    UFUNCTION(BlueprintCallable)
    void DPadUp_Released();
    
    UFUNCTION(BlueprintCallable)
    void DPadUp_Presssed();
    
    UFUNCTION(BlueprintCallable)
    void DPadRight_Released();
    
    UFUNCTION(BlueprintCallable)
    void DPadRight_Presssed();
    
    UFUNCTION(BlueprintCallable)
    void DPadLeft_Released();
    
    UFUNCTION(BlueprintCallable)
    void DPadLeft_Presssed();
    
    UFUNCTION(BlueprintCallable)
    void DPadDown_Released();
    
    UFUNCTION(BlueprintCallable)
    void DPadDown_Presssed();
    
    UFUNCTION(BlueprintCallable)
    void DisableInspectMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CustomOpenPhotoMode();
    
    UFUNCTION(BlueprintCallable)
    bool CrashGame();
    
    UFUNCTION(BlueprintCallable)
    void ClearHandleActor(const bool bClearConstructorModeLeftovers);
    
    UFUNCTION(BlueprintCallable)
    void CircularMenu_Released_Gamepad();
    
    UFUNCTION(BlueprintCallable)
    void CircularMenu_Relased();
    
    UFUNCTION(BlueprintCallable)
    void CircularMenu_Presssed();
    
    UFUNCTION(BlueprintCallable)
    void CircularMenu_Pressed_Gamepad();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanOpenInventory();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanHandleSecondaryActionEnd();
    
public:
    UFUNCTION(BlueprintCallable)
    void BButton_Released();
    
    UFUNCTION(BlueprintCallable)
    void BButton_Presssed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AchievementHandling(const FName AchievementAPIName, float ProgressAmount);
    
    UFUNCTION(BlueprintCallable)
    void AButton_Released();
    
    UFUNCTION(BlueprintCallable)
    void AButton_Presssed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AbortHoldingInteractions();
    
};

