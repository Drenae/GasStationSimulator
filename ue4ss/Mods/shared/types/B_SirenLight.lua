---@meta

---@class AB_SirenLight_C : AB_Point_Light_C
---@field UberGraphFrame FPointerToUberGraphFrame
local AB_SirenLight_C = {}

function AB_SirenLight_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AB_SirenLight_C:ExecuteUbergraph_B_SirenLight(EntryPoint) end


