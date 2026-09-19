---@meta

---@class ACustomization_Door_BP_C : ACustomizationHousePart_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
local ACustomization_Door_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ACustomization_Door_BP_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
function ACustomization_Door_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ACustomization_Door_BP_C:ExecuteUbergraph_Customization_Door_BP(EntryPoint) end


