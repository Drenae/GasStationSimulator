#pragma once
#include "CoreMinimal.h"
#include "EState.h"
#include "ContractSlot.generated.h"

class USpecialContract;

USTRUCT(BlueprintType)
struct GSS2_API FContractSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpecialContract* Contract;
    
    FContractSlot();
};

