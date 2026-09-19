---@meta

---@class ABP_CarWreckTooltip_C : ACarWreckTooltip
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Widget UWidgetComponent
---@field PositionOffset FVector
local ABP_CarWreckTooltip_C = {}

function ABP_CarWreckTooltip_C:SetupWidget() end
---@param DeltaSeconds float
function ABP_CarWreckTooltip_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABP_CarWreckTooltip_C:ExecuteUbergraph_BP_CarWreckTooltip(EntryPoint) end


