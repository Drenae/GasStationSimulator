#pragma once
#include "CoreMinimal.h"
#include "SavedSaleSlot.h"
#include "SavedAuctionsManager.generated.h"

USTRUCT(BlueprintType)
struct FSavedAuctionsManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedSaleSlot> SavedSaleSlots;
    
    GSS2_API FSavedAuctionsManager();
};

