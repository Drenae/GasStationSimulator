---@meta

---@class UWBP_PhotoModePanel_Platform_C : UGSSBaseWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Image_34 UImage
---@field WBP_ClosedDLCText UWBP_ClosedDLCText_C
---@field WBP_PanelPlatform_Button UWBP_PanelPlatform_Button_C
---@field WBP_PanelPlatform_Button_1 UWBP_PanelPlatform_Button_C
---@field WBP_PanelPlatform_Button_2 UWBP_PanelPlatform_Button_C
---@field WidgetSwitcher_1 UWidgetSwitcher
---@field PlatformRef TSoftObjectPtr<AActor>
---@field TempWreck AJunkyardCarWreck
---@field OnCustomizeButtonClicked FWBP_PhotoModePanel_Platform_COnCustomizeButtonClicked
---@field WreckRef AJunkyardCarWreck
---@field AreaRef ACarWreckPlaceableArea
local UWBP_PhotoModePanel_Platform_C = {}

---@param self2 AJunkyardCarWreck
---@param Key EJunkyardCarPartType
---@param Missingpart boolean
function UWBP_PhotoModePanel_Platform_C:CheckCarHasPart(self2, Key, Missingpart) end
function UWBP_PhotoModePanel_Platform_C:BndEvt__WBP_PhotoModePanel_Platform_WBP_PanelPlatform_Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature() end
function UWBP_PhotoModePanel_Platform_C:BndEvt__WBP_PhotoModePanel_Platform_WBP_PanelPlatform_Button_2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature() end
function UWBP_PhotoModePanel_Platform_C:BndEvt__WBP_PhotoModePanel_Platform_WBP_PanelPlatform_Button_1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature() end
function UWBP_PhotoModePanel_Platform_C:OnAnyOptionClicked() end
---@param DLCName EDLCName
---@param bActivated boolean
function UWBP_PhotoModePanel_Platform_C:CustomEvent_0(DLCName, bActivated) end
function UWBP_PhotoModePanel_Platform_C:OnInitialized() end
---@param EntryPoint int32
function UWBP_PhotoModePanel_Platform_C:ExecuteUbergraph_WBP_PhotoModePanel_Platform(EntryPoint) end
function UWBP_PhotoModePanel_Platform_C:OnCustomizeButtonClicked__DelegateSignature() end


