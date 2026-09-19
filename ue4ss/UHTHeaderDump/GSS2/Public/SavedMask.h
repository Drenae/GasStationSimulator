#pragma once
#include "CoreMinimal.h"
#include "SlotStruct.h"
#include "SavedMask.generated.h"

USTRUCT(BlueprintType)
struct FSavedMask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PathName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlotStruct> MaskSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaskMoney;
    
    GSS2_API FSavedMask();
};

