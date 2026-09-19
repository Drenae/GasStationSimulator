---@meta

---@class AStartGameLamp_C : AB_Spot_Light_C
---@field UberGraphFrame FPointerToUberGraphFrame
local AStartGameLamp_C = {}

function AStartGameLamp_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AStartGameLamp_C:ExecuteUbergraph_StartGameLamp(EntryPoint) end


