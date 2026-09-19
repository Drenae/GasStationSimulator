#pragma once
#include "CoreMinimal.h"
#include "StorageCarPart.h"
#include "SavedChemicalSlot.generated.h"

USTRUCT(BlueprintType)
struct FSavedChemicalSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStorageCarPart ItemIN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOccupied;
    
    GSS2_API FSavedChemicalSlot();
};

