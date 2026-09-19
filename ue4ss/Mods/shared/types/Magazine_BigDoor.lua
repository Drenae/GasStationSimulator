---@meta

---@class AMagazine_BigDoor_C : ACustomizationHousePart_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
local AMagazine_BigDoor_C = {}

---@return FName
function AMagazine_BigDoor_C:GetInteractionName() end
function AMagazine_BigDoor_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AMagazine_BigDoor_C:ExecuteUbergraph_Magazine_BigDoor(EntryPoint) end


