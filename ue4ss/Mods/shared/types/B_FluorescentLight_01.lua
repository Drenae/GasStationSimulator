---@meta

---@class AB_FluorescentLight_01_C : AB_Rect_Light_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field MissionLamp boolean
local AB_FluorescentLight_01_C = {}

function AB_FluorescentLight_01_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AB_FluorescentLight_01_C:ExecuteUbergraph_B_FluorescentLight_01(EntryPoint) end


