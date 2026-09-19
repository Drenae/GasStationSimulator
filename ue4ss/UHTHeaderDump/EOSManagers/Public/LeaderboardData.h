#pragma once
#include "CoreMinimal.h"
#include "ELeaderboardStatDataType.h"
#include "LeaderboardData.generated.h"

USTRUCT(BlueprintType)
struct FLeaderboardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerNickname;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELeaderboardStatDataType ValueType;
    
    EOSMANAGERS_API FLeaderboardData();
};

