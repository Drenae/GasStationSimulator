#pragma once
#include "CoreMinimal.h"
#include "GSSWheeledVehicle.h"
#include "InteractionInfo.h"
#include "PlayerVehicleHandbrakeActionDelegate.h"
#include "PlayerVehicleInteractionFDelegate.h"
#include "PlayerVehicleLookSidesDelegate.h"
#include "PlayerVehicleLookUpDelegate.h"
#include "PlayerVehicleMoveForwardDelegate.h"
#include "PlayerVehicleMoveSidewaysDelegate.h"
#include "PlayerVehiclePrimaryActionDelegate.h"
#include "PlayerVehicleSecondaryActionDelegate.h"
#include "PlayerVehicleTurboActionDelegate.h"
#include "ZoomAxisDelegate.h"
#include "PlayerVehicle.generated.h"

class ACharacter;
class UCameraComponent;
class UKeyItemWidget;
class USpringArmComponent;

UCLASS(Abstract, Blueprintable)
class GSS2_API APlayerVehicle : public AGSSWheeledVehicle, public IInteractionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerVehicleMoveForward OnPlayerVehicleMoveForwardAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerVehicleMoveSideways OnPlayerVehicleMoveSidewaysAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerVehicleHandbrakeAction OnPlayerVehicleHandbrakeAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerVehicleTurboAction OnPlayerVehicleTurboAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerVehiclePrimaryAction OnPlayerVehiclePrimaryAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerVehicleSecondaryAction OnPlayerVehicleSecondaryAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerVehicleInteractionF OnPlayerVehicleInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerVehicleLookSides OnPlayerVehicleLookSides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerVehicleLookUp OnPlayerVehicleLookUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZoomAxis OnPlayerVehicleZoomAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* NewSpringArmComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* NewCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* OriginalCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardAxisValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputAxisMoveRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelRemoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StandardSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFillMinigameActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBoostActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEngineCrashed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHandbrakePressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldingCooling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLastMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraMoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverheatSpeedWhenSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverheatSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverheatLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverheatReductionMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverheatReductionHolding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToogleSprintMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraSpeedX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraSpeedY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseLookUpRate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentOverheat;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKeyItemWidget* BindWidget;
    
    APlayerVehicle(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnPossesPlayerVehicle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TutorialCreated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopBoostOnEngineCrash();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetInputActions(bool bPossesed);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCurrentOverheat(float NewValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetVehicle();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PossesPlayerVehicle();
    
    UFUNCTION(BlueprintCallable)
    void PlayerVehicleZoomAxis(float Value);
    
    UFUNCTION(BlueprintCallable)
    void PlayerVehicleTurboAction_Released();
    
    UFUNCTION(BlueprintCallable)
    void PlayerVehicleTurboAction_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void PlayerVehicleSecondaryAction_Released();
    
    UFUNCTION(BlueprintCallable)
    void PlayerVehicleSecondaryAction_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void PlayerVehiclePrimaryAction_Released();
    
    UFUNCTION(BlueprintCallable)
    void PlayerVehiclePrimaryAction_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void PlayerVehicleMoveSideways(float Value);
    
    UFUNCTION(BlueprintCallable)
    void PlayerVehicleMoveForward(float Value);
    
    UFUNCTION(BlueprintCallable)
    void PlayerVehicleLookUpAxis(float Value);
    
    UFUNCTION(BlueprintCallable)
    void PlayerVehicleLookSidesAxis(float Value);
    
    UFUNCTION(BlueprintCallable)
    void PlayerVehicleInteraction_Released();
    
    UFUNCTION(BlueprintCallable)
    void PlayerVehicleInteraction_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void PlayerVehicleHandbreakeAction_Released();
    
    UFUNCTION(BlueprintCallable)
    void PlayerVehicleHandbreakeAction_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OverheatHandling();
    
    UFUNCTION(BlueprintCallable)
    void OnAppliedControlSettings();
    
private:
    UFUNCTION(BlueprintCallable)
    void InputActionZoomAxis(float Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InputActionTurbo(bool bPressed);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputActionSecondary(bool bPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputActionPrimary(bool bPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputActionMoveSides(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputActionMoveForward(float Value);
    
private:
    UFUNCTION(BlueprintCallable)
    void InputActionLookUp(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputActionLookSides(float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputActionInteraction(bool bPressed);
    
    UFUNCTION(BlueprintCallable)
    void InputActionHandbrake(bool bPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentOverheat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EngineCrash();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EngineColor();
    
    UFUNCTION(BlueprintCallable)
    void CreateKeyItemWidget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckIfUnderMap();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BoostBlueprintEvent();
    

    // Fix for true pure virtual functions not being implemented
};

