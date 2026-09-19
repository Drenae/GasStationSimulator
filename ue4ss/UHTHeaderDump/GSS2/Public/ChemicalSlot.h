#pragma once
#include "CoreMinimal.h"
#include "StorageCarPart.h"
#include "ChemicalSlot.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FChemicalSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStorageCarPart ItemIN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSlotOccupied;
    
    FChemicalSlot();
};

