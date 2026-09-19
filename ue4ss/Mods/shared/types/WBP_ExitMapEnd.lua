---@meta

---@class UWBP_ExitMapEnd_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field LifeTime float
local UWBP_ExitMapEnd_C = {}

function UWBP_ExitMapEnd_C:Construct() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_ExitMapEnd_C:Tick(MyGeometry, InDeltaTime) end
---@param EntryPoint int32
function UWBP_ExitMapEnd_C:ExecuteUbergraph_WBP_ExitMapEnd(EntryPoint) end


