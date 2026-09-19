---@meta

---@class ARVCampManager_BP_C : ARVCampManager
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
---@field ['AI Tasks'] TArray<TSubclassOf<UTaskBase>>
local ARVCampManager_BP_C = {}

---@param CurrentTrustPoints int32
---@param Difference int32
function ARVCampManager_BP_C:OnTrustPointsUpdated(CurrentTrustPoints, Difference) end
function ARVCampManager_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ARVCampManager_BP_C:ExecuteUbergraph_RVCampManager_BP(EntryPoint) end


