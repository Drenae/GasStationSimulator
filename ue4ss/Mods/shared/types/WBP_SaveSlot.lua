---@meta

---@class UWBP_SaveSlot_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Data UTextBlock
---@field GameTime UTextBlock
---@field HorizontalBox_ConnectedMaps UHorizontalBox
---@field Image_612 UImage
---@field Image_x UImage
---@field IndexTXT UTextBlock
---@field Remove UDragoButton
---@field SaveLoad UDragoButton
---@field SaveTitle_TXT UTextBlock
---@field text_delete UTextBlock
---@field Time UTextBlock
---@field ForSave boolean
---@field SaveStructure FSavedSlotStruct
---@field SaveSlotsList UWBP_SaveScreen_C
---@field PlayerRef AGSSPlayerCharacter
---@field IndexSlot int32
---@field bCanBeLoaded boolean
---@field PortalRef ADarkPortal_BP_C
---@field bHideDeleteButton boolean
---@field OnConfirmationNeeded FWBP_SaveSlot_COnConfirmationNeeded
---@field IsGamepadConnected boolean
local UWBP_SaveSlot_C = {}

---@param Array TArray<EDLCName>
---@param DisactivatedDLCs TArray<EDLCName>
UWBP_SaveSlot_C['Check DLCCompability'] = function(self, Array, DisactivatedDLCs) end
function UWBP_SaveSlot_C:OnPress_X() end
function UWBP_SaveSlot_C:OnPress_A() end
---@param IsHovered boolean
function UWBP_SaveSlot_C:Hovered(IsHovered) end
function UWBP_SaveSlot_C:Construct() end
function UWBP_SaveSlot_C:BndEvt__SaveActionButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature() end
function UWBP_SaveSlot_C:BndEvt__SaveActionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() end
function UWBP_SaveSlot_C:BndEvt__SaveActionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
function UWBP_SaveSlot_C:BndEvt__remove_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature() end
function UWBP_SaveSlot_C:BndEvt__remove_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature() end
function UWBP_SaveSlot_C:BndEvt__remove_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature() end
function UWBP_SaveSlot_C:BndEvt__remove_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature() end
---@param Hover boolean
function UWBP_SaveSlot_C:GamePadHover(Hover) end
function UWBP_SaveSlot_C:LoadSlot() end
---@param EntryPoint int32
function UWBP_SaveSlot_C:ExecuteUbergraph_WBP_SaveSlot(EntryPoint) end
---@param SaveSlot UUserWidget
---@param DeleteConfirmation boolean
function UWBP_SaveSlot_C:OnConfirmationNeeded__DelegateSignature(SaveSlot, DeleteConfirmation) end


