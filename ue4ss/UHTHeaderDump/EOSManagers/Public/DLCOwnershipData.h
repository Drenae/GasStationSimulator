#pragma once
#include "CoreMinimal.h"
#include "DLCOwnershipData.generated.h"

USTRUCT(BlueprintType)
struct EOSMANAGERS_API FDLCOwnershipData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DLC_NAME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOwned;
    
    FDLCOwnershipData();
};

