---@meta

---@class UPC_Tools_C : UPC_ToolsTab
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ScrollBoxTools UScrollBox
---@field WBP_KeyHint_Left UWBP_KeyHint_C
---@field WBP_KeyHint_Right UWBP_KeyHint_C
---@field TimerRef FTimerHandle
---@field CurrentToolIndex int32
local UPC_Tools_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UPC_Tools_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param Visible boolean
function UPC_Tools_C:HintsVisibility(Visible) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UPC_Tools_C:OnKeyDown(MyGeometry, InKeyEvent) end
function UPC_Tools_C:GamePhadHover() end
function UPC_Tools_C:Construct() end
function UPC_Tools_C:CustomEvent_0() end
function UPC_Tools_C:Destruct() end
---@param EntryPoint int32
function UPC_Tools_C:ExecuteUbergraph_PC_Tools(EntryPoint) end


