---@meta

---@class ARuins_3_C : ARuins_Base_C
---@field UberGraphFrame FPointerToUberGraphFrame
local ARuins_3_C = {}

function ARuins_3_C:ReceiveBeginPlay() end
---@param CurrentStage int32
function ARuins_3_C:UpdateRuins(CurrentStage) end
---@param EntryPoint int32
function ARuins_3_C:ExecuteUbergraph_Ruins_3(EntryPoint) end


