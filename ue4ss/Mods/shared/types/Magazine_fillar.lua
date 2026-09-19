---@meta

---@class AMagazine_fillar_C : ACustomizationHousePart_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
local AMagazine_fillar_C = {}

---@return FName
function AMagazine_fillar_C:GetInteractionName() end
function AMagazine_fillar_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AMagazine_fillar_C:ExecuteUbergraph_Magazine_fillar(EntryPoint) end


