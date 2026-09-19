#pragma once
#include "CoreMinimal.h"
#include "SavedChemicalSlot.h"
#include "SavedChemicalBath.generated.h"

class AChemicalBath;

USTRUCT(BlueprintType)
struct FSavedChemicalBath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedChemicalSlot> SavedSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AChemicalBath> SavedBath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutomaticChemicalEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConcentrationAmount;
    
    GSS2_API FSavedChemicalBath();
};

