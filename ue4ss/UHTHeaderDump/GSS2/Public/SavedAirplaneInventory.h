#pragma once
#include "CoreMinimal.h"
#include "SlotStruct.h"
#include "SavedAirplaneInventory.generated.h"

USTRUCT(BlueprintType)
struct FSavedAirplaneInventory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlotStruct> Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentFuelCapacity;
    
    GSS2_API FSavedAirplaneInventory();
};

