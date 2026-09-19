#include "EOSLeaderboardsSubsystem.h"

UEOSLeaderboardsSubsystem::UEOSLeaderboardsSubsystem() {
}

void UEOSLeaderboardsSubsystem::WriteLeaderboardStats(const TArray<FStatData>& StatsToWrite, const FName LeaderboardName, const FName RatedStatName) {
}

void UEOSLeaderboardsSubsystem::ReadLeaderboardForFriends(FName LeaderboardName, FName StatName, ELeaderboardStatDataType StatType, int32 LocalPlayerNum) {
}

void UEOSLeaderboardsSubsystem::ReadLeaderboardAroundRank(FName LeaderboardName, FName StatName, ELeaderboardStatDataType StatType, int32 Rank, int32 Range) {
}

void UEOSLeaderboardsSubsystem::ReadLeaderboardAroundPlayer(FName LeaderboardName, FName StatName, ELeaderboardStatDataType StatType, int32 LocalPlayerNum, int32 Range) {
}

void UEOSLeaderboardsSubsystem::FlushLeaderboards() {
}


