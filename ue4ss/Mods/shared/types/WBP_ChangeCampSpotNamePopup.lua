---@meta

---@class UWBP_ChangeCampSpotNamePopup_C : UGSSBaseWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CharacterCountShake UWidgetAnimation
---@field OnHoverConfirm UWidgetAnimation
---@field OnHoverCancel UWidgetAnimation
---@field ConstructAnim UWidgetAnimation
---@field CampNameTextBox UEditableTextBox
---@field CharactersCountText UTextBlock
---@field Confirm_Overlay UOverlay
---@field NoButton UDragoButton
---@field WBP_KeyHint_Cancel UWBP_KeyHint_C
---@field WBP_KeyHint_Confirm UWBP_KeyHint_C
---@field YesButton UDragoButton
---@field OnYesClicked FWBP_ChangeCampSpotNamePopup_COnYesClicked
---@field OnNoClicked FWBP_ChangeCampSpotNamePopup_COnNoClicked
---@field CampSpot ARVCampSpot
---@field DefaultName FString
---@field MaxNameLength int32
---@field Alphabet TArray<FString>
---@field CorrectedTextArray TArray<FString>
---@field WasApplied boolean
---@field WasTextValid boolean
local UWBP_ChangeCampSpotNamePopup_C = {}

function UWBP_ChangeCampSpotNamePopup_C:Construct() end
---@param CampSpot ARVCampSpot
---@param DefaultName FString
---@param Alphabet TArray<FString>
function UWBP_ChangeCampSpotNamePopup_C:Init(CampSpot, DefaultName, Alphabet) end
---@param Text FText
function UWBP_ChangeCampSpotNamePopup_C:BndEvt__WBP_ChangeCampSpotNamePopup_CampNameTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(Text) end
---@param Text FText
---@param CommitMethod ETextCommit::Type
function UWBP_ChangeCampSpotNamePopup_C:BndEvt__WBP_ChangeCampSpotNamePopup_CampNameTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(Text, CommitMethod) end
function UWBP_ChangeCampSpotNamePopup_C:Apply() end
function UWBP_ChangeCampSpotNamePopup_C:BndEvt__WBP_ChangeCampSpotNamePopup_NoButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() end
function UWBP_ChangeCampSpotNamePopup_C:BndEvt__WBP_ChangeCampSpotNamePopup_YesButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() end
function UWBP_ChangeCampSpotNamePopup_C:Exit() end
function UWBP_ChangeCampSpotNamePopup_C:BndEvt__WBP_RefreshPopup_Yes_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature() end
function UWBP_ChangeCampSpotNamePopup_C:BndEvt__WBP_RefreshPopup_Yes_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature() end
function UWBP_ChangeCampSpotNamePopup_C:BndEvt__WBP_RefreshPopup_No_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature() end
function UWBP_ChangeCampSpotNamePopup_C:BndEvt__WBP_RefreshPopup_No_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature() end
function UWBP_ChangeCampSpotNamePopup_C:OnDefaultEscape() end
---@param EntryPoint int32
function UWBP_ChangeCampSpotNamePopup_C:ExecuteUbergraph_WBP_ChangeCampSpotNamePopup(EntryPoint) end
function UWBP_ChangeCampSpotNamePopup_C:OnNoClicked__DelegateSignature() end
function UWBP_ChangeCampSpotNamePopup_C:OnYesClicked__DelegateSignature() end


