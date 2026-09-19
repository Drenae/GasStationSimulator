---@meta

---@class UDarkPortal_WBP_C : UGSSBaseWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FadeOut UWidgetAnimation
---@field HoverPlus UWidgetAnimation
---@field HoverMinus UWidgetAnimation
---@field ShowAnim UWidgetAnimation
---@field CancelButton_1 Uneumorph_button_C
---@field ContinueJourney_button Uneumorph_button_C
---@field HorizontalBox_63 UHorizontalBox
---@field HorizontalBox_NewSave UHorizontalBox
---@field Image_193 UImage
---@field Overlay_SavedGames UOverlay
---@field SaveScrollBox UScrollBox
---@field SelectSave_button Uneumorph_button_C
---@field SizeBox_Options USizeBox
---@field StartNewJourney_button Uneumorph_button_C
---@field TextBlock_1 UTextBlock
---@field TextBlock_Fee UTextBlock
---@field VerticalBox_Fee UVerticalBox
---@field VerticalBox_Selector UVerticalBox
---@field WBP_BaseButton UWBP_Map_SaveMenu_Buton_C
---@field WBP_TidalWaveButton UWBP_Map_SaveMenu_Buton_C
---@field ['Dark PortalActor'] ADarkPortal_BP_C
---@field ButtonArray TArray<UWBP_SaveSlot_C>
---@field IsCategoryClicked boolean
---@field CurrentMap FString
---@field LocalMap FString
---@field GamePadActiveButtonsList TArray<Uneumorph_button_C>
---@field GamePadCurrentButton int32
---@field GamePadCurrentSave int32
local UDarkPortal_WBP_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UDarkPortal_WBP_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UDarkPortal_WBP_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@param DLC EDLCName
function UDarkPortal_WBP_C:SetupButtonsForDlc(DLC) end
function UDarkPortal_WBP_C:SetDisabled() end
function UDarkPortal_WBP_C:CreateSaveSlots() end
---@param DarkPortal ADarkPortal_BP_C
function UDarkPortal_WBP_C:Setup(DarkPortal) end
function UDarkPortal_WBP_C:BndEvt__DarkPortal_WBP_CancelButton_1_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature() end
function UDarkPortal_WBP_C:BndEvt__DarkPortal_WBP_ContinueJourney_button_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature() end
function UDarkPortal_WBP_C:BndEvt__DarkPortal_WBP_SelectSave_button_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature() end
function UDarkPortal_WBP_C:BndEvt__DarkPortal_WBP_StartNewJourney_button_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature() end
function UDarkPortal_WBP_C:BndEvt__DarkPortal_WBP_CancelButton_1_K2Node_ComponentBoundEvent_4_ButtonHover__DelegateSignature() end
function UDarkPortal_WBP_C:BndEvt__DarkPortal_WBP_ContinueJourney_button_K2Node_ComponentBoundEvent_5_ButtonHover__DelegateSignature() end
function UDarkPortal_WBP_C:BndEvt__DarkPortal_WBP_SelectSave_button_K2Node_ComponentBoundEvent_6_ButtonHover__DelegateSignature() end
function UDarkPortal_WBP_C:BndEvt__DarkPortal_WBP_StartNewJourney_button_K2Node_ComponentBoundEvent_7_ButtonHover__DelegateSignature() end
function UDarkPortal_WBP_C:Construct() end
function UDarkPortal_WBP_C:CloseSaveScreen() end
function UDarkPortal_WBP_C:Destruct() end
---@param MapName FString
---@param DLCName EDLCName
function UDarkPortal_WBP_C:OnButtonClicked(MapName, DLCName) end
function UDarkPortal_WBP_C:BindMapButtons() end
function UDarkPortal_WBP_C:GamePadClickCancel() end
function UDarkPortal_WBP_C:GamePadCloseSaveScreen() end
---@param EntryPoint int32
function UDarkPortal_WBP_C:ExecuteUbergraph_DarkPortal_WBP(EntryPoint) end


