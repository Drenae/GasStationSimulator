#pragma once
#include "CoreMinimal.h"
#include "ERenown_Reasons.h"
#include "RenownTypeAmountOverride.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FRenownTypeAmountOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERenown_Reasons RenownReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    FRenownTypeAmountOverride();
};

