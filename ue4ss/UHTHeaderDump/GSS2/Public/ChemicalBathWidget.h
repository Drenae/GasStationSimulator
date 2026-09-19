#pragma once
#include "CoreMinimal.h"
#include "EStorageOpenCase.h"
#include "GSSBaseWidget.h"
#include "StorageCarPart.h"
#include "ChemicalBathWidget.generated.h"

class AChemicalBath;
class AJunkyardCarWreckCustomizable;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UChemicalBathWidget : public UGSSBaseWidget {
    GENERATED_BODY()
public:
    UChemicalBathWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateConcentrationAmount(AChemicalBath* ChemicalRef);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCleaningSlot(int32 Index, FStorageCarPart PartStruct, AChemicalBath* ChemicalRef);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeWidget(AJunkyardCarWreckCustomizable* CarWreckRef, EStorageOpenCase InOpenCase);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeChemicalWidget(AChemicalBath* ChemicalbathRef);
    
};

