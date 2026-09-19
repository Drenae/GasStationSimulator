---@meta

---@class UWBP_PlatformContractHolder_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Hide UWidgetAnimation
---@field BG_Body UImage
---@field Body_overlay UOverlay
---@field ContractNone USpacer
---@field GamePadBorder_IMG UImage
---@field GSS_Button_WBP UGSS_Button_WBP_C
---@field Image_66 UImage
---@field Overlay_Header UOverlay
---@field ScrollBox_0 UScrollBox
---@field SelectContractMainButton_Text UTextBlock
---@field TextBlock_ContractNumber UTextBlock
---@field WBP_ArrowButton_Left UWBP_ArrowButton_C
---@field WBP_ArrowButton_Right UWBP_ArrowButton_C
---@field WBP_KeyHint_MoveLeft UWBP_KeyHint_C
---@field WBP_KeyHint_MoveRight UWBP_KeyHint_C
---@field WBP_SingleContractPlatform UWBP_SingleContractPlatform_C
---@field WidgetSwitcher_Contracts UWidgetSwitcher
---@field bIsExpanded boolean
---@field ContactWidgetIndex int32
---@field ContractCode FName
---@field OnPressed FWBP_PlatformContractHolder_COnPressed
---@field bIsUsedInCustomization boolean
local UWBP_PlatformContractHolder_C = {}

---@param Visible boolean
function UWBP_PlatformContractHolder_C:HintsVisibility(Visible) end
---@param WreckRef UObject
UWBP_PlatformContractHolder_C['Update Contracts'] = function(self, WreckRef) end
function UWBP_PlatformContractHolder_C:Finished_6F833006496E63E905B1FE844A2D812C() end
function UWBP_PlatformContractHolder_C:Finished_DE5FE3AB42936A221992699948110E49() end
function UWBP_PlatformContractHolder_C:Construct() end
function UWBP_PlatformContractHolder_C:BndEvt__WBP_PlatformContract_GSS_Button_WBP_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature() end
function UWBP_PlatformContractHolder_C:BndEvt__WBP_PlatformContractHolder_WBP_ArrowButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature() end
function UWBP_PlatformContractHolder_C:BndEvt__WBP_PlatformContractHolder_WBP_ArrowButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature() end
---@param Wreck AJunkyardCarWreckCustomizable
function UWBP_PlatformContractHolder_C:SetContracts(Wreck) end
function UWBP_PlatformContractHolder_C:PressNextContract() end
function UWBP_PlatformContractHolder_C:GamePadOpenContractList() end
function UWBP_PlatformContractHolder_C:PressPreviousContract() end
---@param Hover boolean
function UWBP_PlatformContractHolder_C:GamePadHover(Hover) end
function UWBP_PlatformContractHolder_C:CustomEvent_0() end
function UWBP_PlatformContractHolder_C:Destruct() end
---@param EntryPoint int32
function UWBP_PlatformContractHolder_C:ExecuteUbergraph_WBP_PlatformContractHolder(EntryPoint) end
function UWBP_PlatformContractHolder_C:OnPressed__DelegateSignature() end


