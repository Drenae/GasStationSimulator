#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CarWashGunDroppedDelegate.h"
#include "CarWashGunFiringStateChangedDelegate.h"
#include "CarWashGunPickedUpDelegate.h"
#include "ShineMaterialEnabledDelegate.h"
#include "CarWashPistol.generated.h"

class ACarWashPistolNozzle;
class ACarWashStation;
class APawn;
class UAudioComponent;
class UChildActorComponent;
class UMaterialInstanceDynamic;
class UMaterialParameterCollection;
class UNiagaraComponent;
class UNozzleData;
class USoundCue;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API ACarWashPistol : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ACarWashStation> OwningStation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CarWashPistol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* Nozzle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNozzleData*> ValidNozzles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPickedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PistolRangeBeforeReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APawn> HeldByPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NozzleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceCheckTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLastDistanceCheck;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ActionsAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* LoopAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* RotateNozzleSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SwitchNozzleSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PickUpPistolSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PutDownPistolSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Mid;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarWashGunPickedUp OnCarWashPistolPickedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarWashGunDropped OnCarWashPistolDropped;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShineMaterialEnabled OnShineMaterialEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarWashGunFiringStateChanged OnFiringStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator HorizontalRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator VerticalRotation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* CarWashParamCollection;
    
public:
    ACarWashPistol(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void WashLineTraceFromLocationDirectional(FVector StartLocation, FVector Direction, FVector SpraySpreadDirection);
    
    UFUNCTION(BlueprintCallable)
    void WashLineTrace();
    
    UFUNCTION(BlueprintCallable)
    void VFXFireActivation(bool bActivate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePistolGauge(float Percentage);
    
    UFUNCTION(BlueprintCallable)
    void StopShiningMaterial();
    
    UFUNCTION(BlueprintCallable)
    void StopFiring();
    
    UFUNCTION(BlueprintCallable)
    void ShineMaterial();
    
    UFUNCTION(BlueprintCallable)
    void SetWashingStrength();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVFXSpread(bool NewSpread);
    
public:
    UFUNCTION(BlueprintCallable)
    void SecondaryAction(bool bPressed);
    
    UFUNCTION(BlueprintCallable)
    void PutDown();
    
    UFUNCTION(BlueprintCallable)
    void PrimaryAction(bool bPressed);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PistolDistanceCheck();
    
public:
    UFUNCTION(BlueprintCallable)
    void PickUpByPawn(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void IncrementNozzle(int32 IncrementValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    UNiagaraComponent* GetVFXSystem();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACarWashPistolNozzle* GetNozzle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPickedUp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetCarWashPistol();
    
    UFUNCTION(BlueprintCallable)
    void ExtraAction(bool bPressed);
    
};

