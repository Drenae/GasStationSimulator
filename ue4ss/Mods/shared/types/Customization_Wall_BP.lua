---@meta

---@class ACustomization_Wall_BP_C : ACustomizationHousePart_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
local ACustomization_Wall_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ACustomization_Wall_BP_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@return FName
function ACustomization_Wall_BP_C:GetInteractionName() end
function ACustomization_Wall_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ACustomization_Wall_BP_C:ExecuteUbergraph_Customization_Wall_BP(EntryPoint) end


