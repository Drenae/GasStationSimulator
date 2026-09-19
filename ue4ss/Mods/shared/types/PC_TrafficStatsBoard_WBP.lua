---@meta

---@class UPC_TrafficStatsBoard_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field hoveranimtext UWidgetAnimation
---@field AnimIcon UWidgetAnimation
---@field ExitButton UDragoButton
---@field ReturnOveraly UOverlay
---@field WBP_KeyHint_BottomButtonUpload_1 UWBP_KeyHint_C
---@field WBP_TrafficStats UWBP_TrafficStats_C
---@field CurrentTrafficLabel FText
---@field CurrentEventID int32
---@field UpcomingEventID int32
---@field CurrentEventValid boolean
---@field UpcomingEventValid boolean
---@field DefaultCurrentEventTooltip FText
---@field DefaultUpcomingEventTooltip FText
---@field ImpactTooltip UTrafficInfluence_Tooltip_C
---@field UpcomingEventTooltip UTrafficInfluence_Tooltip_C
---@field OnClosed FPC_TrafficStatsBoard_WBP_COnClosed
---@field CurrentIndex int32
local UPC_TrafficStatsBoard_WBP_C = {}

function UPC_TrafficStatsBoard_WBP_C:BndEvt__PC_TrafficStats_WBP_ExitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UPC_TrafficStatsBoard_WBP_C:Return() end
function UPC_TrafficStatsBoard_WBP_C:OnInitialized() end
function UPC_TrafficStatsBoard_WBP_C:CustomEvent_0() end
function UPC_TrafficStatsBoard_WBP_C:CustomEvent_1() end
function UPC_TrafficStatsBoard_WBP_C:Construct() end
function UPC_TrafficStatsBoard_WBP_C:Remove() end
---@param EntryPoint int32
function UPC_TrafficStatsBoard_WBP_C:ExecuteUbergraph_PC_TrafficStatsBoard_WBP(EntryPoint) end
function UPC_TrafficStatsBoard_WBP_C:OnClosed__DelegateSignature() end


