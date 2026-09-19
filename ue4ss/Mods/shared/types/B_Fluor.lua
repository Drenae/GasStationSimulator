---@meta

---@class AB_Fluor_C : AB_Spot_Light_C
---@field UberGraphFrame FPointerToUberGraphFrame
local AB_Fluor_C = {}

function AB_Fluor_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function AB_Fluor_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function AB_Fluor_C:ExecuteUbergraph_B_Fluor(EntryPoint) end


