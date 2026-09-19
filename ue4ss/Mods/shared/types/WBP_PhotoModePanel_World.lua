---@meta

---@class UWBP_PhotoModePanel_World_C : UGSSBaseWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Image_120 UImage
---@field MoveToExhibitionSpot UWBP_PanelPlatform_Button_C
---@field MoveToPlatform UWBP_PanelPlatform_Button_C
---@field OnOffSwitcher UWidgetSwitcher
---@field Overlay_151 UOverlay
---@field TakePhoto UWBP_PanelPlatform_Button_C
---@field WBP_ClosedDLCText UWBP_ClosedDLCText_C
---@field WreckRef AJunkyardCarWreck
---@field AreaRef ACarWreckPlaceableArea
local UWBP_PhotoModePanel_World_C = {}

function UWBP_PhotoModePanel_World_C:BndEvt__WBP_PhotoModePanel_World_WBP_PanelPlatform_Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature() end
function UWBP_PhotoModePanel_World_C:BndEvt__WBP_PhotoModePanel_World_MoveToExhibitionSpot_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature() end
function UWBP_PhotoModePanel_World_C:BndEvt__WBP_PhotoModePanel_World_MoveToPlatform_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature() end
function UWBP_PhotoModePanel_World_C:OnAnyOptionClicked() end
---@param DLCName EDLCName
---@param bActivated boolean
function UWBP_PhotoModePanel_World_C:CustomEvent_0(DLCName, bActivated) end
function UWBP_PhotoModePanel_World_C:OnInitialized() end
---@param EntryPoint int32
function UWBP_PhotoModePanel_World_C:ExecuteUbergraph_WBP_PhotoModePanel_World(EntryPoint) end


