#pragma once
#include "CoreMinimal.h"
#include "EContractDifficulty.h"
#include "EJunkyardPartRarity.h"
#include "BasketBasicInfo.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FBasketBasicInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StateLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardPartRarity ContractTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EContractDifficulty StateDifficulty;
    
    FBasketBasicInfo();
};

