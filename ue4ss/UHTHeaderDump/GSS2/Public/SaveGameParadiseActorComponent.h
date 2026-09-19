#pragma once
#include "CoreMinimal.h"
#include "SaveGameDLCActorComponent.h"
#include "SavedEqRentalBuilding.h"
#include "SaveGameParadiseActorComponent.generated.h"

class AEquipmentRentalBuilding;
class AScubaEquipmentRentalBuilding;
class AShower;
class ASurfingEquipmentRentalBuilding;
class AVolcano;
class AWC;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API USaveGameParadiseActorComponent : public USaveGameDLCActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AVolcano> Volcano;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AScubaEquipmentRentalBuilding> ScubaEquipmentRentalBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASurfingEquipmentRentalBuilding> SurfingEquipmentRentalBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AShower> ShowerBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AWC> WcBuilding;
    
    USaveGameParadiseActorComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SaveWaterVehicles();
    
    UFUNCTION(BlueprintCallable)
    void SaveVolcanoStreak();
    
    UFUNCTION(BlueprintCallable)
    void SaveVolcano();
    
    UFUNCTION(BlueprintCallable)
    void SaveToilet();
    
    UFUNCTION(BlueprintCallable)
    void SaveSurfingEqRentalBuilding();
    
    UFUNCTION(BlueprintCallable)
    void SaveShower();
    
    UFUNCTION(BlueprintCallable)
    void SaveShark();
    
    UFUNCTION(BlueprintCallable)
    void SaveScubaEqRentalBuilding();
    
    UFUNCTION(BlueprintCallable)
    void SaveEqRentalBuilding(FSavedEqRentalBuilding& SavedEqRentalBuilding, AEquipmentRentalBuilding* EqRentalBuilding);
    
    UFUNCTION(BlueprintCallable)
    void SaveDeathsData();
    
    UFUNCTION(BlueprintCallable)
    void SaveCombo();
    
    UFUNCTION(BlueprintCallable)
    void LoadWaterVehicles();
    
    UFUNCTION(BlueprintCallable)
    void LoadVolcanoStreak();
    
    UFUNCTION(BlueprintCallable)
    void LoadVolcano();
    
    UFUNCTION(BlueprintCallable)
    void LoadToilet();
    
    UFUNCTION(BlueprintCallable)
    void LoadSurfingEqRentalBuilding();
    
    UFUNCTION(BlueprintCallable)
    void LoadShower();
    
    UFUNCTION(BlueprintCallable)
    void LoadShark();
    
    UFUNCTION(BlueprintCallable)
    void LoadScubaEqRentalBuilding();
    
    UFUNCTION(BlueprintCallable)
    void LoadEqRentalBuilding(FSavedEqRentalBuilding& NewLoadEqRentalBuilding, AEquipmentRentalBuilding* EqRentalBuilding);
    
    UFUNCTION(BlueprintCallable)
    void LoadDeathsData();
    
    UFUNCTION(BlueprintCallable)
    void LoadCombo();
    
};

