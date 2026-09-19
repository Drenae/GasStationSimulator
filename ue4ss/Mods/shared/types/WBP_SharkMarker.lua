---@meta

---@class UWBP_SharkMarker_C : UGSSWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OpenMarker UWidgetAnimation
---@field Instiginator AActor
---@field IsInMinigameMode boolean
local UWBP_SharkMarker_C = {}

---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_SharkMarker_C:Tick(MyGeometry, InDeltaTime) end
function UWBP_SharkMarker_C:Construct() end
---@param EntryPoint int32
function UWBP_SharkMarker_C:ExecuteUbergraph_WBP_SharkMarker(EntryPoint) end


