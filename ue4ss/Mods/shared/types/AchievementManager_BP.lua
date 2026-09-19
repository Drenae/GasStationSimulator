---@meta

---@class AAchievementManager_BP_C : AGSSAchievementManager
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AchiSoundMaker UAudioComponent
local AAchievementManager_BP_C = {}

---@param AchievementStub FName
function AAchievementManager_BP_C:WriteAchievementToOnlineSubsystem(AchievementStub) end
---@param bWasSuccessfull boolean
function AAchievementManager_BP_C:OnAchievementWritten(bWasSuccessfull) end
---@param EntryPoint int32
function AAchievementManager_BP_C:ExecuteUbergraph_AchievementManager_BP(EntryPoint) end


