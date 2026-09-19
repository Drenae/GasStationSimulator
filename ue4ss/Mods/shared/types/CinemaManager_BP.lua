---@meta

---@class ACinemaManager_BP_C : ADLCDriveInCinemaManager
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
---@field CustomMediaPlayer UMediaPlayer
---@field IsMusicMuted boolean
---@field IsInsideMuteVolume boolean
---@field ShouldMusicBeMuted boolean
---@field UpdateMusicStateTimer FTimerHandle
---@field FadeSoundtrack USoundMix
---@field bMoviePicker boolean
local ACinemaManager_BP_C = {}

---@param NewRenownLevel int32
function ACinemaManager_BP_C:ShowRenownLevelUpPopup(NewRenownLevel) end
---@param MovieIndex int32
---@return FMovieParameters
function ACinemaManager_BP_C:GetMovieParametersByIndex(MovieIndex) end
---@return int32
function ACinemaManager_BP_C:CheckForRenownLevelNeeded() end
---@param MoneyAmount float
---@param RenownAmount float
---@param DetailedYieldType EEconomyDetailedYieldType
function ACinemaManager_BP_C:ShowCinemaRewardPopup(MoneyAmount, RenownAmount, DetailedYieldType) end
---@return int32
function ACinemaManager_BP_C:CheckForRenownPointsNeeded() end
---@return boolean
function ACinemaManager_BP_C:CheckForRenownLevel() end
function ACinemaManager_BP_C:ReceiveBeginPlay() end
---@param AddedPoints float
function ACinemaManager_BP_C:OnRenownPointsAdded(AddedPoints) end
---@param MovieName FString
---@param bForce boolean
function ACinemaManager_BP_C:RefreshCustomMoviePoster(MovieName, bForce) end
---@param OpenedUrl FString
function ACinemaManager_BP_C:OnMoviePosterOpened(OpenedUrl) end
function ACinemaManager_BP_C:PlaybackResumed() end
function ACinemaManager_BP_C:OnMuteMusicVolumeEntered() end
function ACinemaManager_BP_C:OnUnmuteMusicVolumeLeft() end
function ACinemaManager_BP_C:UpdateMusicState() end
---@param EndPlayReason EEndPlayReason::Type
function ACinemaManager_BP_C:ReceiveEndPlay(EndPlayReason) end
---@param EntryPoint int32
function ACinemaManager_BP_C:ExecuteUbergraph_CinemaManager_BP(EntryPoint) end


