---@meta

---@class ABP_Concrete_Wall_C : ACustomizationHousePart_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
local ABP_Concrete_Wall_C = {}

function ABP_Concrete_Wall_C:UserConstructionScript() end
function ABP_Concrete_Wall_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABP_Concrete_Wall_C:ExecuteUbergraph_BP_Concrete_Wall(EntryPoint) end


