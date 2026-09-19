---@meta

---@class AGarage_lvl1_C : ALevelScriptActor
---@field UberGraphFrame FPointerToUberGraphFrame
local AGarage_lvl1_C = {}

function AGarage_lvl1_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AGarage_lvl1_C:ExecuteUbergraph_Garage_lvl1(EntryPoint) end


