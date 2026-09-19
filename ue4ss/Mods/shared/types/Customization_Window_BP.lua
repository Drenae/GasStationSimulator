---@meta

---@class ACustomization_Window_BP_C : ACustomizationHousePart_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
local ACustomization_Window_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ACustomization_Window_BP_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
function ACustomization_Window_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ACustomization_Window_BP_C:ExecuteUbergraph_Customization_Window_BP(EntryPoint) end


