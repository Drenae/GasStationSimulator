---@meta

---@class UWBP_BBQTip_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field LoopAnimation UWidgetAnimation
---@field CanvasPanel_Click UCanvasPanel
---@field CanvasPanel_Wait UCanvasPanel
---@field HandClosed UImage
---@field HandOpened UImage
---@field WBP_KeyBindedAction UWBP_KeyBindedAction_C
---@field WidgetSwitcher_89 UWidgetSwitcher
---@field ['BBQ Item'] ABBQItem
local UWBP_BBQTip_C = {}

function UWBP_BBQTip_C:Construct() end
---@param Item ABBQItem
---@param State EBBQItemState
UWBP_BBQTip_C['On Item State Changed'] = function(self, Item, State) end
function UWBP_BBQTip_C:Destruct() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_BBQTip_C:Tick(MyGeometry, InDeltaTime) end
---@param EntryPoint int32
function UWBP_BBQTip_C:ExecuteUbergraph_WBP_BBQTip(EntryPoint) end


