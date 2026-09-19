---@meta

---@class UWBP_CashDesk_Widget_C : UGSSBaseWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CategoryTitle_TXT UTextBlock
---@field CategoryTitle_TXT_1 UTextBlock
---@field GamePadAccept_IMG UImage
---@field HorizontalBox_63 UHorizontalBox
---@field Image UImage
---@field Image_1 UImage
---@field Image_2 UImage
---@field Image_8 UImage
---@field Image_10 UImage
---@field Image_34 UImage
---@field Image_76 UImage
---@field PreviewSegment_2 UOverlay
---@field WBP_Button_Cash_Edit UWBP_Button_Cash_Edit_C
---@field WBP_CashEditButton UWBP_CashEditButton_C
---@field WBP_CashEditButton_1 UWBP_CashEditButton_C
---@field WBP_CashEditButton_2 UWBP_CashEditButton_C
---@field WBP_ColorSlot UWBP_ColorSlot_C
---@field WBP_ColorSlot_1 UWBP_ColorSlot_C
---@field WBP_ColorSlot_2 UWBP_ColorSlot_C
---@field WBP_ColorSlot_3 UWBP_ColorSlot_C
---@field WBP_ColorSlot_4 UWBP_ColorSlot_C
---@field WBP_ColorSlot_5 UWBP_ColorSlot_C
---@field WBP_ColorSlot_6 UWBP_ColorSlot_C
---@field WBP_ColorSlot_7 UWBP_ColorSlot_C
---@field WBP_ColorSlot_8 UWBP_ColorSlot_C
---@field WBP_ColorSlot_9 UWBP_ColorSlot_C
---@field WBP_ColorSlot_10 UWBP_ColorSlot_C
---@field WBP_ColorSlot_11 UWBP_ColorSlot_C
---@field WrapBox_1 UWrapBox
---@field CashShopRef ACashShop
---@field SelectedColor FLinearColor
---@field MeshIndex int32
---@field OnClickSound USoundBase
---@field GamePadCurrentSegment int32
---@field GamePadCurrentCashRegister int32
---@field GamePadCurrentColor int32
---@field GamePadColorsRowSizeIndex int32
local UWBP_CashDesk_Widget_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_CashDesk_Widget_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_CashDesk_Widget_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param MeshIndex int32
---@param CashWidgetRef UWBP_CashEditButton_C
function UWBP_CashDesk_Widget_C:OnMeshChanged(MeshIndex, CashWidgetRef) end
---@param SelectedColor FLinearColor
function UWBP_CashDesk_Widget_C:GetSelectedColor(SelectedColor) end
---@param Color FLinearColor
function UWBP_CashDesk_Widget_C:OnColorSelected(Color) end
function UWBP_CashDesk_Widget_C:CustomEscape() end
function UWBP_CashDesk_Widget_C:Destruct() end
function UWBP_CashDesk_Widget_C:Construct() end
function UWBP_CashDesk_Widget_C:BndEvt__WBP_CashDesk_Widget_WBP_Button_Cash_Edit_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature() end
---@param MeshIndex int32
---@param Widget UWBP_CashEditButton_C
function UWBP_CashDesk_Widget_C:BndEvt__WBP_CashDesk_Widget_WBP_CashEditButton_K2Node_ComponentBoundEvent_0_OnCashClicked__DelegateSignature(MeshIndex, Widget) end
---@param MeshIndex int32
---@param Widget UWBP_CashEditButton_C
function UWBP_CashDesk_Widget_C:BndEvt__WBP_CashDesk_Widget_WBP_CashEditButton_1_K2Node_ComponentBoundEvent_2_OnCashClicked__DelegateSignature(MeshIndex, Widget) end
---@param MeshIndex int32
---@param Widget UWBP_CashEditButton_C
function UWBP_CashDesk_Widget_C:BndEvt__WBP_CashDesk_Widget_WBP_CashEditButton_2_K2Node_ComponentBoundEvent_3_OnCashClicked__DelegateSignature(MeshIndex, Widget) end
function UWBP_CashDesk_Widget_C:GamePadClickAccept() end
---@param EntryPoint int32
function UWBP_CashDesk_Widget_C:ExecuteUbergraph_WBP_CashDesk_Widget(EntryPoint) end


