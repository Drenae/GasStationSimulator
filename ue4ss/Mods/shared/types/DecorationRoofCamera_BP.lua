---@meta

---@class ADecorationRoofCamera_BP_C : ADecorationCamera
---@field UberGraphFrame FPointerToUberGraphFrame
---@field arrow UArrowComponent
---@field DefaultSceneRoot USceneComponent
local ADecorationRoofCamera_BP_C = {}

function ADecorationRoofCamera_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ADecorationRoofCamera_BP_C:ExecuteUbergraph_DecorationRoofCamera_BP(EntryPoint) end


