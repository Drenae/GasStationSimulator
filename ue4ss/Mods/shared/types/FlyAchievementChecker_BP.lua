---@meta

---@class AFlyAchievementChecker_BP_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Box UBoxComponent
local AFlyAchievementChecker_BP_C = {}

---@param OtherActor AActor
function AFlyAchievementChecker_BP_C:ReceiveActorBeginOverlap(OtherActor) end
---@param EntryPoint int32
function AFlyAchievementChecker_BP_C:ExecuteUbergraph_FlyAchievementChecker_BP(EntryPoint) end


