---@meta

---@class UGSSGameInstance_BP_C : UGSSGameInstance_Parent_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field LoadingScreen UUserWidget
---@field LoadingScreenClass TSoftClassPtr<UUserWidget>
---@field Quest_09_SandPile TSoftObjectPtr<ARuins>
---@field Quest_36_Door TArray<TSoftObjectPtr<AMagazineDoor_Base_BP_C>>
---@field InBetweenLoadingScreen TSoftClassPtr<UUserWidget>
---@field TempLoadingScreen UInBetweenLoadingScreenWidget_BP_C
---@field Timer FTimerHandle
---@field TEMP_IsRestockingShelvesEnabled boolean
---@field MusicMuteMixes TArray<USoundMix>
local UGSSGameInstance_BP_C = {}

---@param SavedGSSQuest FSavedQuest
---@param NewQuest UQuestBase
---@param OutMaxProgress int32
---@param OutCurrentProgress int32
---@return TSoftClassPtr<UObjectiveBase>
function UGSSGameInstance_BP_C:TranslateOldQuestToNew_Blueprint(SavedGSSQuest, NewQuest, OutMaxProgress, OutCurrentProgress) end
function UGSSGameInstance_BP_C:ReceiveInit() end
---@param CurrentProgress float
---@param MaxProgress float
---@param SaveGameCompleted boolean
function UGSSGameInstance_BP_C:OnSaveGameProgressUpdated_Event_0(CurrentProgress, MaxProgress, SaveGameCompleted) end
---@param bCondition boolean
---@param MapToOpen FName
function UGSSGameInstance_BP_C:ShowLoadScreen(bCondition, MapToOpen) end
---@param GameLoaded boolean
function UGSSGameInstance_BP_C:OnFinishGameLoaded_Event_0(GameLoaded) end
UGSSGameInstance_BP_C['Pop sound mix'] = function(self, ) end
function UGSSGameInstance_BP_C:UnmuteAllMusic() end
---@param EntryPoint int32
function UGSSGameInstance_BP_C:ExecuteUbergraph_GSSGameInstance_BP(EntryPoint) end


