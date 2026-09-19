#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ECharacterState.h"
#include "EGarageMinigame.h"
#include "MinigameCameraOverride.h"
#include "Templates/SubclassOf.h"
#include "MinigameBaseCamera.generated.h"

class AGSSWheeledVehicle;
class AGarage;
class ATrashItemBase;
class AVehiclePart;
class UAudioComponent;
class UCameraComponent;
class USoundCue;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API AMinigameBaseCamera : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMinigameCameraOverride> CameraOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterState MinigameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGarageMinigame GarageMingameType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVehiclePart* PartToFix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> PartsToHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGarage* GarageRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* MinigameCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SoundMaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SoundMakerTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* MinigameStartSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* MinigameEnd_Success_Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* MinigameEnd_Fail_Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATrashItemBase> TrashItemClass;
    
public:
    AMinigameBaseCamera(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    FHitResult TraceUnderMouseCursorFromMinigameCamera(TArray<AActor*> ActorsToIgnore);
    
    UFUNCTION(BlueprintCallable)
    void SecondaryAction(bool bPressed);
    
    UFUNCTION(BlueprintCallable)
    void RightAction(float Val);
    
    UFUNCTION(BlueprintCallable)
    void PrimaryAction(bool bPressed);
    
    UFUNCTION(BlueprintCallable)
    bool HasCameraOverrideForCar(TSoftClassPtr<AGSSWheeledVehicle> CarClassSoftClassPtr);
    
    UFUNCTION(BlueprintCallable)
    void GetCameraOverrides(TSoftClassPtr<AGSSWheeledVehicle> CarClassSoftClassPtr, FVector& LocationOverride, FRotator& RotationOverride);
    
    UFUNCTION(BlueprintCallable)
    void FinishMinigame(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void BButtonAction(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable)
    void AButtonAction(bool bIsPressed);
    
};

