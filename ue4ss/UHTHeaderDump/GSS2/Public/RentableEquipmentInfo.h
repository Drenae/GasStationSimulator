#pragma once
#include "CoreMinimal.h"
#include "RentableEquipmentInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct GSS2_API FRentableEquipmentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ItemCurrentStateIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentDurability;
    
    FRentableEquipmentInfo();
};

