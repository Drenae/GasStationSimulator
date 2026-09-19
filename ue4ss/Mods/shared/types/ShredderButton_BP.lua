---@meta

---@class AShredderButton_BP_C : AGameButton
---@field UberGraphFrame FPointerToUberGraphFrame
local AShredderButton_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AShredderButton_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
function AShredderButton_BP_C:OnButtonPress() end
---@param EntryPoint int32
function AShredderButton_BP_C:ExecuteUbergraph_ShredderButton_BP(EntryPoint) end


