---@meta

---@class UWBP_PlaneMarker_C : UGSSWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TextBlock_153 UTextBlock
---@field Instiginator AActor
---@field IsInMinigameMode boolean
local UWBP_PlaneMarker_C = {}

---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_PlaneMarker_C:Tick(MyGeometry, InDeltaTime) end
---@param EntryPoint int32
function UWBP_PlaneMarker_C:ExecuteUbergraph_WBP_PlaneMarker(EntryPoint) end


