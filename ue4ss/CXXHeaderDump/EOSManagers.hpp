#ifndef UE4SS_SDK_EOSManagers_HPP
#define UE4SS_SDK_EOSManagers_HPP

#include "EOSManagers_enums.hpp"

struct FDLCContainer
{
}; // Size: 0x10

struct FDLCOwnershipData
{
    FName DLC_NAME;                                                                   // 0x0000 (size: 0x8)
    bool bIsOwned;                                                                    // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FDLCSettings
{
    FName DLC_NAME;                                                                   // 0x0000 (size: 0x8)
    FString EpicAudienceId;                                                           // 0x0008 (size: 0x10)
    FString GOGProductId;                                                             // 0x0018 (size: 0x10)
    FString SteamAppId;                                                               // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FFoundSessionParams
{
    FString SessionId;                                                                // 0x0000 (size: 0x10)
    FString OwningUsername;                                                           // 0x0010 (size: 0x10)
    FString Keywords;                                                                 // 0x0020 (size: 0x10)
    int32 OpenPublicConnections;                                                      // 0x0030 (size: 0x4)
    int32 OpenPrivateConnections;                                                     // 0x0034 (size: 0x4)
    int32 NumPublicConnections;                                                       // 0x0038 (size: 0x4)
    int32 NumPrivateConnections;                                                      // 0x003C (size: 0x4)
    int32 SearchResultIndex;                                                          // 0x0040 (size: 0x4)

}; // Size: 0x48

struct FLeaderboardData
{
    FString PlayerNickname;                                                           // 0x0000 (size: 0x10)
    FString Value;                                                                    // 0x0010 (size: 0x10)
    int32 Rank;                                                                       // 0x0020 (size: 0x4)
    ELeaderboardStatDataType ValueType;                                               // 0x0024 (size: 0x1)

}; // Size: 0x28

struct FStatData
{
    FName ID;                                                                         // 0x0000 (size: 0x8)
    FString Value;                                                                    // 0x0008 (size: 0x10)
    ELeaderboardStatDataType ValueType;                                               // 0x0018 (size: 0x1)

}; // Size: 0x20

class UEOSAchievmentsSubsystem : public UGameInstanceSubsystem
{
    FEOSAchievmentsSubsystemOnAchievementUnlockedEvent OnAchievementUnlockedEvent;    // 0x0050 (size: 0x10)
    void OnAchievementUnlockedEvent(FString PlayerName, FString AchievementId);
    FEOSAchievmentsSubsystemOnAchievementWrittenEvent OnAchievementWrittenEvent;      // 0x0060 (size: 0x10)
    void OnAchievementWrittenEvent(bool bWasSuccessfull);

    void UnlockAchievmentsForLocalPlayer(const TArray<FName>& AchievementIDs, int32 LocalPlayerNum);
}; // Size: 0x70

class UEOSAuthSubsystem : public UGameInstanceSubsystem
{
    FEOSAuthSubsystemOnLoginCompletedEvent OnLoginCompletedEvent;                     // 0x0040 (size: 0x10)
    void OnLoginCompleted(bool bWasSuccessful, FString UserId);

    void TestLogin(int32 LocalPlayerNum);
    void Logout();
    bool IsLoggedIn();
    FString GetLoggedPlayerUserName();
}; // Size: 0x50

class UEOSDLCDiscoverySubsystem : public UGameInstanceSubsystem
{
    FEOSDLCDiscoverySubsystemOnQueryDLCOwnershipFinished OnQueryDLCOwnershipFinished; // 0x0058 (size: 0x10)
    void OnQueryDLCOwnershipFinished(bool bSuccesfull, const TArray<FDLCOwnershipData>& OwnershipArray);

    void QueryDLCOwnership(int32 LocalPlayerId, TArray<FName> DLC_Names);
}; // Size: 0x68

class UEOSLeaderboardsSubsystem : public UGameInstanceSubsystem
{
    FEOSLeaderboardsSubsystemOnLeaderboardsFlushed OnLeaderboardsFlushed;             // 0x0090 (size: 0x10)
    void OnLeaderboardsFlushed(const FName& SessionName, bool bWasSuccessfull);
    FEOSLeaderboardsSubsystemOnLeaderboardsReadCompleted OnLeaderboardsReadCompleted; // 0x00A0 (size: 0x10)
    void OnLeaderboardsReadCompleted(const FName& LeaderboardName, bool bWasSuccessfull, const TArray<FLeaderboardData>& LeaderboardRows);

    void WriteLeaderboardStats(const TArray<FStatData>& StatsToWrite, const FName LeaderboardName, const FName RatedStatName);
    void ReadLeaderboardForFriends(FName LeaderboardName, FName StatName, ELeaderboardStatDataType StatType, int32 LocalPlayerNum);
    void ReadLeaderboardAroundRank(FName LeaderboardName, FName StatName, ELeaderboardStatDataType StatType, int32 Rank, int32 Range);
    void ReadLeaderboardAroundPlayer(FName LeaderboardName, FName StatName, ELeaderboardStatDataType StatType, int32 LocalPlayerNum, int32 Range);
    void FlushLeaderboards();
}; // Size: 0xB0

class UEOSManagersHelperBPLibrary : public UBlueprintFunctionLibrary
{

    bool JSONFileToStruct(const TArray<uint8>& FileContent, FJsonObjectWrapper& JsonObjectWrapper);
    class UTexture2D* ImageFileToTexture2D(const TArray<uint8>& FileContent);
    EUsedPlatform GetUsedPlatformByName(FName PlatformName);
}; // Size: 0x28

class UEOSManagersSettings : public UDeveloperSettings
{
    TArray<FDLCSettings> DLCSettings;                                                 // 0x0038 (size: 0x10)

}; // Size: 0x48

class UEOSPlayerDataStorageSubsystem : public UGameInstanceSubsystem
{
    FEOSPlayerDataStorageSubsystemOnPlayerFileReadCompleted OnPlayerFileReadCompleted; // 0x0048 (size: 0x10)
    void OnPlayerFileReadCompleted(bool bWasSuccesfull, const int32 LocalPlayerNum, FString Filename, const TArray<uint8>& FileContent);
    FEOSPlayerDataStorageSubsystemOnConnectionToEOSChanged OnConnectionToEOSChanged;  // 0x0058 (size: 0x10)
    void OnConnectionToEOSChanged(bool bConnectionEnabled);
    FEOSPlayerDataStorageSubsystemOnPlayerCacheFilesCompleted OnPlayerCacheFilesCompleted; // 0x0068 (size: 0x10)
    void OnPlayerCacheFilesCompleted(bool bWasSuccessfull, const int32 LocalPlayerNum, FString ErrorString, FString TagName);
    FEOSPlayerDataStorageSubsystemOnPlayerFileWriteCompleted OnPlayerFileWriteCompleted; // 0x0078 (size: 0x10)
    void OnPlayerFileWriteCompleted(bool bWasSuccessfull, const int32 LocalPlayerNum, FString Filename);

    void WriteFile(int32 LocalPlayerNumber, FString Filename, TArray<uint8> FileContent);
    bool UserHasFile(int32 LocalPlayerNumber, FString Filename);
    void ReadFile(int32 LocalPlayerNumber, FString Filename);
}; // Size: 0x88

class UEOSSessionSubsystem : public UGameInstanceSubsystem
{
    FEOSSessionSubsystemOnSessionCreatedEvent OnSessionCreatedEvent;                  // 0x0048 (size: 0x10)
    void OnSessionCreated(FName SessionName, bool bWasSuccessfull);
    FEOSSessionSubsystemOnSessionSearchCompletedEvent OnSessionSearchCompletedEvent;  // 0x0058 (size: 0x10)
    void OnSessionSearched(bool bWasSuccessful, const TArray<FFoundSessionParams>& FoundSessions);
    FEOSSessionSubsystemOnSessionInterrupted OnSessionInterrupted;                    // 0x0068 (size: 0x10)
    void OnSessionInterrupted();
    FEOSSessionSubsystemOnSessionDestroyedEvent OnSessionDestroyedEvent;              // 0x0078 (size: 0x10)
    void OnSessionDestroyed();

    void JoinSession(const FFoundSessionParams& Session);
    void FindSessions(FString Keywords);
    void DestroySession();
    void CreateSesssion(FString SearchKeywords, int32 MaxPlayers);
}; // Size: 0x98

class UEOSTitleStorageSubsystem : public UGameInstanceSubsystem
{
    TArray<FString> ReadFileRequestQueue;                                             // 0x0058 (size: 0x10)
    int32 CurrentReadNum;                                                             // 0x0068 (size: 0x4)
    FEOSTitleStorageSubsystemOnFileReadCompleted OnFileReadCompleted;                 // 0x0070 (size: 0x10)
    void OnFileReadCompleted(bool bWasSuccesfull, FString Filename, const TArray<uint8>& FileContent);
    FEOSTitleStorageSubsystemOnConnectionToEOSChanged OnConnectionToEOSChanged;       // 0x0080 (size: 0x10)
    void OnConnectionToEOSChanged(bool bConnectionEnabled);
    FEOSTitleStorageSubsystemOnCacheFilesCompleted OnCacheFilesCompleted;             // 0x0090 (size: 0x10)
    void OnCacheFilesCompleted(bool bWasSuccessfull, FString ErrorString, FString TagName);

    void ReadFile(FString Filename);
    bool IsEOSConnectionAvailable();
    EUsedPlatform GetUsedPlatform();
    void CacheFileByTags(FString TagName);
}; // Size: 0xA0

#endif
