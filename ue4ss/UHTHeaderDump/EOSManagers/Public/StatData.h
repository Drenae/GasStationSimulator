#pragma once
#include "CoreMinimal.h"
#include "ELeaderboardStatDataType.h"
#include "StatData.generated.h"

USTRUCT(BlueprintType)
struct FStatData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELeaderboardStatDataType ValueType;
    
    EOSMANAGERS_API FStatData();
};

