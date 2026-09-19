#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "ELeaderboardStatDataType.h"
#include "OnLeaderboardsFlushedDelegate.h"
#include "OnLeaderboardsReadCompletedDelegate.h"
#include "StatData.h"
#include "EOSLeaderboardsSubsystem.generated.h"

UCLASS(Blueprintable)
class EOSMANAGERS_API UEOSLeaderboardsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLeaderboardsFlushed OnLeaderboardsFlushed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLeaderboardsReadCompleted OnLeaderboardsReadCompleted;
    
    UEOSLeaderboardsSubsystem();

    UFUNCTION(BlueprintCallable)
    void WriteLeaderboardStats(const TArray<FStatData>& StatsToWrite, const FName LeaderboardName, const FName RatedStatName);
    
    UFUNCTION(BlueprintCallable)
    void ReadLeaderboardForFriends(FName LeaderboardName, FName StatName, ELeaderboardStatDataType StatType, int32 LocalPlayerNum);
    
    UFUNCTION(BlueprintCallable)
    void ReadLeaderboardAroundRank(FName LeaderboardName, FName StatName, ELeaderboardStatDataType StatType, int32 Rank, int32 Range);
    
    UFUNCTION(BlueprintCallable)
    void ReadLeaderboardAroundPlayer(FName LeaderboardName, FName StatName, ELeaderboardStatDataType StatType, int32 LocalPlayerNum, int32 Range);
    
    UFUNCTION(BlueprintCallable)
    void FlushLeaderboards();
    
};

