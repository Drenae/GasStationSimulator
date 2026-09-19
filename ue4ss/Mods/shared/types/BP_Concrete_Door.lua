---@meta

---@class ABP_Concrete_Door_C : ACustomizationHousePart_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
local ABP_Concrete_Door_C = {}

function ABP_Concrete_Door_C:UserConstructionScript() end
function ABP_Concrete_Door_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABP_Concrete_Door_C:ExecuteUbergraph_BP_Concrete_Door(EntryPoint) end


