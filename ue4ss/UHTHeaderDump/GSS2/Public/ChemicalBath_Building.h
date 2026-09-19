#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "OnChemicalBuildingLevelUpDelegate.h"
#include "StorageCarPart.h"
#include "ChemicalBath_Building.generated.h"

class AChemicalBath;

UCLASS(Blueprintable)
class GSS2_API AChemicalBath_Building : public AInteractableBuilding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutomaticEnabled;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChemicalBuildingLevelUp OnChemicalBuildingLevelUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AChemicalBath> ChemicalBathsRef;
    
    AChemicalBath_Building(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SwitchAutomaticChemical();
    
    UFUNCTION(BlueprintCallable)
    void SetAutomaticEnabled(bool inIsAutomaticEnbaled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutomaticUnlocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAutomaticEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckIsItemInChemicalBath(FStorageCarPart CarPartToCheck);
    
};

