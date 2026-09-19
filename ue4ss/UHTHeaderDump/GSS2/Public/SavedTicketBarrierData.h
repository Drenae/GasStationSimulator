#pragma once
#include "CoreMinimal.h"
#include "SavedTicketBarrierData.generated.h"

USTRUCT(BlueprintType)
struct FSavedTicketBarrierData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBarrierOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAccessTicketsOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticValidation;
    
    GSS2_API FSavedTicketBarrierData();
};

