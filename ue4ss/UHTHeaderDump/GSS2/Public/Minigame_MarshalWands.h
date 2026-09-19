#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "EMarshalWandsMinigameDifficulty.h"
#include "ENPCConversationType.h"
#include "InteractableBuilding.h"
#include "MarshalWandsMinigameDifficulty.h"
#include "OnMarshalWandsMinigameFinishedDelegate.h"
#include "OnMarshalWandsMinigameRestartedDelegate.h"
#include "OnMarshalWandsMinigameStartedDelegate.h"
#include "OnPlaneLiftOffStatusChangedDelegate.h"
#include "OnPlanePositionStatusChangedDelegate.h"
#include "OnPlaneRotationStatusChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "Minigame_MarshalWands.generated.h"

class AAirplaneBase;
class AMarshalWands;
class UArrowComponent;
class UCameraComponent;
class UInstancedStaticMeshComponent;
class UMarshalDifficultyWidget;
class UMaterialParameterCollection;
class UMaterialParameterCollectionInstance;
class UMinigameMarshalWandsWidget;
class USplineComponent;
class UStaticMesh;
class UUserWidget;

UCLASS(Blueprintable)
class GSS2_API AMinigame_MarshalWands : public AInteractableBuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* CenterSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* PlaneSpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* WandsSpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* MinigameCamera;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMarshalWandsMinigameFinished OnMarshalWandsMinigameFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMarshalWandsMinigameStarted OnMarshalWandsMinigameStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMarshalWandsMinigameRestarted OnMarshalWandsMinigameRestarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlaneRotationStatusChanged OnPlaneRotationStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlanePositionStatusChanged OnPlanePositionStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlaneLiftOffStatusChanged OnPlaneLiftOffStatusChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WandsSpeedMultiplierMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WandsSpeedMultiplierKeyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaneTakeOffDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ExitMinigameTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle RestartMinigameTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle PlaneTakeOffTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAllowedPlaneDistanceFromCenterSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPlaneForwardSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPlaneForwardSpeedDuringTakeOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingPlaneForwardSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaneForwardSpeedGainedPerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaneForwardSpeedGainedPerTickDuringTakeOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPlaneRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetAscendPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AscendPitchPerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AAirplaneBase> PlaneClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMarshalWands> WandsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMinigameMarshalWandsWidget> MinigameWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> FadeInOutWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInDebugMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameRestartingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentPlaneRotationMinigameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActualPlaneRotationInWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinigameCurrentRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTakingOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRestarting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform StartingCameraTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform StartingWandsTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentPlaneForwardSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentAscendPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaneDistanceFromCenterSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLastDirectionChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaneDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAirplaneBase* PlaneInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentWandsRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMarshalWands* WandsInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMinigameMarshalWandsWidget* MinigameWidgetInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* FadeInOutWidgetInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlaneInGoodPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlaneInGoodRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanConfirmLiftOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTutorialShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarshalWandsMinigameDifficulty> DifficultySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMarshalDifficultyWidget> DifficultySettingsWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMarshalDifficultyWidget* DifficultySettingsWidgetInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMarshalWandsMinigameDifficulty CurrentDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAllowedPlaneRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinMinigameDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMinigameDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TryChangeDirectionInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPlaneRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaneWiggleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HappyStatForSuccessfullyFinishing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightsOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* LightsInstancedMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* RunwayLightsMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollectionInstance* RunwaylightMaterialParamsInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* RunwaylightMaterialParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RunwaylightMaterialColorParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle RandomJoeDialogTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle FirstJoeDialogTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TakeOffJoeDialogTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomJoeDialogInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstJoeDialogDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TakeOffJoeDialogDelay;
    
public:
    AMinigame_MarshalWands(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void WigglePlane();
    
    UFUNCTION(BlueprintCallable)
    void VisualsTick();
    
    UFUNCTION(BlueprintCallable)
    void UnbindPlayerInput();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TurnOnRunwayLights(bool bOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TurnOnAirplaneStartLights(bool bOn);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TriggeringEvents();
    
    UFUNCTION(BlueprintCallable)
    void StartPlaneTakeOffSequance_TimerElapsed();
    
    UFUNCTION(BlueprintCallable)
    void StartPlaneTakeOffSequance();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartMiniGame(EMarshalWandsMinigameDifficulty Difficulty);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnLightsAlongRunway();
    
    UFUNCTION(BlueprintCallable)
    void ShowDifficultyWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetupPlayerInput();
    
    UFUNCTION(BlueprintCallable)
    void SetIsTutorialShown(bool _bIsTutorialShow, bool bIsShownOnStart);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficultyValues(EMarshalWandsMinigameDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultValues();
    
    UFUNCTION(BlueprintCallable)
    void RotatePlaneInDirectionOfWands();
    
    UFUNCTION(BlueprintCallable)
    void RestartMinigame_TimerElapsed();
    
    UFUNCTION(BlueprintCallable)
    void RestartMinigame();
    
    UFUNCTION(BlueprintCallable)
    void PlayRandomJoeDialog(ENPCConversationType Dialogtype);
    
    UFUNCTION(BlueprintCallable)
    void MoveWandsByMouse(float Value);
    
    UFUNCTION(BlueprintCallable)
    void MoveWandsByKeyboard(float Value);
    
    UFUNCTION(BlueprintCallable)
    void MoveWands(float Value);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlaneFacingPlayer();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlaneCloseEnoughToCenter();
    
    UFUNCTION(BlueprintCallable)
    void InputPrimaryActionSpace(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable)
    void InputF(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable)
    void FinishMinigame(bool bSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void ExitMinigame_TimerElapsed(bool bSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void ExitMinigame(bool bSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void ConfirmLiftOff();
    
    UFUNCTION(BlueprintCallable)
    void ClearJoeDialogTimers();
    
    UFUNCTION(BlueprintCallable)
    bool CanConfirmLiftOff();
    
    UFUNCTION(BlueprintCallable)
    void CalculatePlaneDistenceFromCenter();
    
    UFUNCTION(BlueprintCallable)
    void AscendPlane();
    
    UFUNCTION(BlueprintCallable)
    void AcceleratePlane();
    
};

