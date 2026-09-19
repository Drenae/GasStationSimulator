#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "CamperWashingFlowDurationUpdatedDelegate.h"
#include "ECamperWashingEfficiency.h"
#include "ETaskResult.h"
#include "RvMinigameInWorld.h"
#include "RvMinigameInWorld_CamperWashing.generated.h"

class AGSSWheeledVehicle;
class APortableCarWashPistol;
class ARVCampSpot;
class AWashableCamperMesh;
class UCamperWashingSettings;
class UChildActorComponent;
class UMaterialInstanceDynamic;
class URVCamperComponent;

UCLASS(Blueprintable)
class GSS2_API ARvMinigameInWorld_CamperWashing : public ARvMinigameInWorld {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCamperWashingFlowDurationUpdated OnFlowDurationUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APortableCarWashPistol> Pistol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UChildActorComponent> PistolChildActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* WashableCarMeshMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCamperWashingSettings* CamperWashingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentWaterFlowDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECamperWashingEfficiency CurrentEfficiency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPistolIsFiring;
    
public:
    ARvMinigameInWorld_CamperWashing(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UseWater(float Amount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnShowDirtEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OnReachedWashTarget(ETaskResult TaskResult);
    
    UFUNCTION(BlueprintCallable)
    void OnGuestServiceCompleted(FGameplayTag Tag, bool bAutocompleted);
    
    UFUNCTION(BlueprintCallable)
    void OnFiringStateChanged(bool bIsFiring);
    
    UFUNCTION(BlueprintCallable)
    void OnCleaningSolutionActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnCarWashPistolDropped();
    
    UFUNCTION(BlueprintCallable)
    void OnCamperSpawned(URVCamperComponent* Camper);
    
    UFUNCTION(BlueprintCallable)
    void OnCamperLoaded(URVCamperComponent* Camper, bool IsParked);
    
    UFUNCTION(BlueprintCallable)
    void OnCamperLeft(URVCamperComponent* Camper);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AWashableCamperMesh* GetWashableCamperMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARVCampSpot* GetCampSpot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGSSWheeledVehicle* GetCamperVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URVCamperComponent* GetCamperComponent() const;
    
};

