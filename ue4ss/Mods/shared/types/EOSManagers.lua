---@meta

---@class FDLCContainer
local FDLCContainer = {}


---@class FDLCOwnershipData
---@field DLC_NAME FName
---@field bIsOwned boolean
local FDLCOwnershipData = {}



---@class FDLCSettings
---@field DLC_NAME FName
---@field EpicAudienceId FString
---@field GOGProductId FString
---@field SteamAppId FString
local FDLCSettings = {}



---@class FFoundSessionParams
---@field SessionId FString
---@field OwningUsername FString
---@field Keywords FString
---@field OpenPublicConnections int32
---@field OpenPrivateConnections int32
---@field NumPublicConnections int32
---@field NumPrivateConnections int32
---@field SearchResultIndex int32
local FFoundSessionParams = {}



---@class FLeaderboardData
---@field PlayerNickname FString
---@field Value FString
---@field Rank int32
---@field ValueType ELeaderboardStatDataType
local FLeaderboardData = {}



---@class FStatData
---@field ID FName
---@field Value FString
---@field ValueType ELeaderboardStatDataType
local FStatData = {}



---@class UEOSAchievmentsSubsystem : UGameInstanceSubsystem
---@field OnAchievementUnlockedEvent FEOSAchievmentsSubsystemOnAchievementUnlockedEvent
---@field OnAchievementWrittenEvent FEOSAchievmentsSubsystemOnAchievementWrittenEvent
local UEOSAchievmentsSubsystem = {}

---@param AchievementIDs TArray<FName>
---@param LocalPlayerNum int32
function UEOSAchievmentsSubsystem:UnlockAchievmentsForLocalPlayer(AchievementIDs, LocalPlayerNum) end


---@class UEOSAuthSubsystem : UGameInstanceSubsystem
---@field OnLoginCompletedEvent FEOSAuthSubsystemOnLoginCompletedEvent
local UEOSAuthSubsystem = {}

---@param LocalPlayerNum int32
function UEOSAuthSubsystem:TestLogin(LocalPlayerNum) end
function UEOSAuthSubsystem:Logout() end
---@return boolean
function UEOSAuthSubsystem:IsLoggedIn() end
---@return FString
function UEOSAuthSubsystem:GetLoggedPlayerUserName() end


---@class UEOSDLCDiscoverySubsystem : UGameInstanceSubsystem
---@field OnQueryDLCOwnershipFinished FEOSDLCDiscoverySubsystemOnQueryDLCOwnershipFinished
local UEOSDLCDiscoverySubsystem = {}

---@param LocalPlayerId int32
---@param DLC_Names TArray<FName>
function UEOSDLCDiscoverySubsystem:QueryDLCOwnership(LocalPlayerId, DLC_Names) end


---@class UEOSLeaderboardsSubsystem : UGameInstanceSubsystem
---@field OnLeaderboardsFlushed FEOSLeaderboardsSubsystemOnLeaderboardsFlushed
---@field OnLeaderboardsReadCompleted FEOSLeaderboardsSubsystemOnLeaderboardsReadCompleted
local UEOSLeaderboardsSubsystem = {}

---@param StatsToWrite TArray<FStatData>
---@param LeaderboardName FName
---@param RatedStatName FName
function UEOSLeaderboardsSubsystem:WriteLeaderboardStats(StatsToWrite, LeaderboardName, RatedStatName) end
---@param LeaderboardName FName
---@param StatName FName
---@param StatType ELeaderboardStatDataType
---@param LocalPlayerNum int32
function UEOSLeaderboardsSubsystem:ReadLeaderboardForFriends(LeaderboardName, StatName, StatType, LocalPlayerNum) end
---@param LeaderboardName FName
---@param StatName FName
---@param StatType ELeaderboardStatDataType
---@param Rank int32
---@param Range int32
function UEOSLeaderboardsSubsystem:ReadLeaderboardAroundRank(LeaderboardName, StatName, StatType, Rank, Range) end
---@param LeaderboardName FName
---@param StatName FName
---@param StatType ELeaderboardStatDataType
---@param LocalPlayerNum int32
---@param Range int32
function UEOSLeaderboardsSubsystem:ReadLeaderboardAroundPlayer(LeaderboardName, StatName, StatType, LocalPlayerNum, Range) end
function UEOSLeaderboardsSubsystem:FlushLeaderboards() end


---@class UEOSManagersHelperBPLibrary : UBlueprintFunctionLibrary
local UEOSManagersHelperBPLibrary = {}

---@param FileContent TArray<uint8>
---@param JsonObjectWrapper FJsonObjectWrapper
---@return boolean
function UEOSManagersHelperBPLibrary:JSONFileToStruct(FileContent, JsonObjectWrapper) end
---@param FileContent TArray<uint8>
---@return UTexture2D
function UEOSManagersHelperBPLibrary:ImageFileToTexture2D(FileContent) end
---@param PlatformName FName
---@return EUsedPlatform
function UEOSManagersHelperBPLibrary:GetUsedPlatformByName(PlatformName) end


---@class UEOSManagersSettings : UDeveloperSettings
---@field DLCSettings TArray<FDLCSettings>
local UEOSManagersSettings = {}



---@class UEOSPlayerDataStorageSubsystem : UGameInstanceSubsystem
---@field OnPlayerFileReadCompleted FEOSPlayerDataStorageSubsystemOnPlayerFileReadCompleted
---@field OnConnectionToEOSChanged FEOSPlayerDataStorageSubsystemOnConnectionToEOSChanged
---@field OnPlayerCacheFilesCompleted FEOSPlayerDataStorageSubsystemOnPlayerCacheFilesCompleted
---@field OnPlayerFileWriteCompleted FEOSPlayerDataStorageSubsystemOnPlayerFileWriteCompleted
local UEOSPlayerDataStorageSubsystem = {}

---@param LocalPlayerNumber int32
---@param Filename FString
---@param FileContent TArray<uint8>
function UEOSPlayerDataStorageSubsystem:WriteFile(LocalPlayerNumber, Filename, FileContent) end
---@param LocalPlayerNumber int32
---@param Filename FString
---@return boolean
function UEOSPlayerDataStorageSubsystem:UserHasFile(LocalPlayerNumber, Filename) end
---@param LocalPlayerNumber int32
---@param Filename FString
function UEOSPlayerDataStorageSubsystem:ReadFile(LocalPlayerNumber, Filename) end


---@class UEOSSessionSubsystem : UGameInstanceSubsystem
---@field OnSessionCreatedEvent FEOSSessionSubsystemOnSessionCreatedEvent
---@field OnSessionSearchCompletedEvent FEOSSessionSubsystemOnSessionSearchCompletedEvent
---@field OnSessionInterrupted FEOSSessionSubsystemOnSessionInterrupted
---@field OnSessionDestroyedEvent FEOSSessionSubsystemOnSessionDestroyedEvent
local UEOSSessionSubsystem = {}

---@param Session FFoundSessionParams
function UEOSSessionSubsystem:JoinSession(Session) end
---@param Keywords FString
function UEOSSessionSubsystem:FindSessions(Keywords) end
function UEOSSessionSubsystem:DestroySession() end
---@param SearchKeywords FString
---@param MaxPlayers int32
function UEOSSessionSubsystem:CreateSesssion(SearchKeywords, MaxPlayers) end


---@class UEOSTitleStorageSubsystem : UGameInstanceSubsystem
---@field ReadFileRequestQueue TArray<FString>
---@field CurrentReadNum int32
---@field OnFileReadCompleted FEOSTitleStorageSubsystemOnFileReadCompleted
---@field OnConnectionToEOSChanged FEOSTitleStorageSubsystemOnConnectionToEOSChanged
---@field OnCacheFilesCompleted FEOSTitleStorageSubsystemOnCacheFilesCompleted
local UEOSTitleStorageSubsystem = {}

---@param Filename FString
function UEOSTitleStorageSubsystem:ReadFile(Filename) end
---@return boolean
function UEOSTitleStorageSubsystem:IsEOSConnectionAvailable() end
---@return EUsedPlatform
function UEOSTitleStorageSubsystem:GetUsedPlatform() end
---@param TagName FString
function UEOSTitleStorageSubsystem:CacheFileByTags(TagName) end


