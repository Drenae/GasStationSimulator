#pragma once
#include "CoreMinimal.h"
#include "ChemicalSlot.h"
#include "InteractableBuilding.h"
#include "OnChemicalTickDelegate.h"
#include "StorageCarPart.h"
#include "ChemicalBath.generated.h"

class AChemicalBath_Building;
class UChemicalBathWidget;
class UConcentrationData;

UCLASS(Blueprintable)
class GSS2_API AChemicalBath : public AInteractableBuilding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChemicalTick ChemicalTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChemicalSlot> ChemicalSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Concetration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LevelConcentrationDecrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LevelDirtDecrease;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChemicalBathWidget* WidgetRef;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConcentrationData* ConcentrationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartSlotAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AChemicalBath_Building* ChemicalBathBuilding;
    
    AChemicalBath(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SwitchAutomaticChemical();
    
    UFUNCTION(BlueprintCallable)
    void SetConcentrationAmount(float InConcentrationAmount);
    
    UFUNCTION(BlueprintCallable)
    void SetChemicalSlots(TArray<FChemicalSlot> InSlotsToSet);
    
    UFUNCTION(BlueprintCallable)
    void ResetConcentration();
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromChemicalSlot(int32 InSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnChemicalBuildingUp(int32 Level, AChemicalBath_Building* BuildingRef);
    
    UFUNCTION(BlueprintCallable)
    void OnChemicalBuildingBeginPlay(AChemicalBath_Building* BathBuilding);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSlotOccupied(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsChemicalSlotsEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFirstEmptySlotIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDirtRemovalAmount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentConcetration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FChemicalSlot> GetChemicalSlots();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmountOfItemsInSlots();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateMoneyRequiredToRestoreConcentration();
    
    UFUNCTION(BlueprintCallable)
    bool AddToFirstEmptySlot(FStorageCarPart Item);
    
    UFUNCTION(BlueprintCallable)
    void AddToChemicalSlot(int32 InSlotIndex, FStorageCarPart Item);
    
    UFUNCTION(BlueprintCallable)
    void AddFirstDirtyCarPartToCleaning();
    
};

