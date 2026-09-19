---@meta

---@class ABP_RoofDecorationVolume_C : ATriggerBox
---@field UberGraphFrame FPointerToUberGraphFrame
local ABP_RoofDecorationVolume_C = {}

function ABP_RoofDecorationVolume_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABP_RoofDecorationVolume_C:ExecuteUbergraph_BP_RoofDecorationVolume(EntryPoint) end


