---@meta

---@class ASeanResetButton_BP_C : AInteractableBuilding
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SM_Custom_Wheel_05_Mid UStaticMeshComponent
---@field DiggerResetButton UStaticMeshComponent
---@field AreYouSurePopup UConfirmSeanReset_WBP_C
local ASeanResetButton_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ASeanResetButton_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ASeanResetButton_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ASeanResetButton_BP_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@return FName
function ASeanResetButton_BP_C:GetInteractionName() end
---@param Loaded UClass
function ASeanResetButton_BP_C:OnLoaded_6B0301534E414B75621C6280293DFA94(Loaded) end
---@param Pawn APawn
function ASeanResetButton_BP_C:DisableInteractionInfo(Pawn) end
function ASeanResetButton_BP_C:OnButtonClicked() end
function ASeanResetButton_BP_C:ClickedYes() end
function ASeanResetButton_BP_C:ClickedNo() end
---@param EntryPoint int32
function ASeanResetButton_BP_C:ExecuteUbergraph_SeanResetButton_BP(EntryPoint) end


