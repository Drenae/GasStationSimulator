---@meta

---@class ABP_BBQSelectedSlotIndicator_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Plane UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field ['Target Slot'] UBBQSlotComponent
---@field ['Move Speed'] float
local ABP_BBQSelectedSlotIndicator_C = {}

---@param Slot UBBQSlotComponent
ABP_BBQSelectedSlotIndicator_C['Set Target Slot'] = function(self, Slot) end
---@param DeltaSeconds float
function ABP_BBQSelectedSlotIndicator_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABP_BBQSelectedSlotIndicator_C:ExecuteUbergraph_BP_BBQSelectedSlotIndicator(EntryPoint) end


