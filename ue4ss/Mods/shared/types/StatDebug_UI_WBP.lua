---@meta

---@class UStatDebug_UI_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field StatsVertical UVerticalBox
---@field curTime float
---@field UpdateTime float
local UStatDebug_UI_WBP_C = {}

function UStatDebug_UI_WBP_C:UpdateList() end
function UStatDebug_UI_WBP_C:Construct() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UStatDebug_UI_WBP_C:Tick(MyGeometry, InDeltaTime) end
---@param EntryPoint int32
function UStatDebug_UI_WBP_C:ExecuteUbergraph_StatDebug_UI_WBP(EntryPoint) end


