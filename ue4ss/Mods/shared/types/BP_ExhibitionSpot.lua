---@meta

---@class ABP_ExhibitionSpot_C : AExhibitionSpot
---@field UberGraphFrame FPointerToUberGraphFrame
---@field WBP_Exhibition UWBP_ExhibitionPanel_C
---@field EndLocation FVector
local ABP_ExhibitionSpot_C = {}

---@param DeltaSeconds float
function ABP_ExhibitionSpot_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABP_ExhibitionSpot_C:ExecuteUbergraph_BP_ExhibitionSpot(EntryPoint) end


