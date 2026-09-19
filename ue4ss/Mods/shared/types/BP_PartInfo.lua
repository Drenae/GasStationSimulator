---@meta

---@class ABP_PartInfo_C : ACarPart_Tooltip
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RightPoint USceneComponent
---@field LeftPOint USceneComponent
---@field Widget UWidgetComponent
---@field ['Owner Part'] UJunkyardCarPartCustomizable
local ABP_PartInfo_C = {}

---@param DeltaSeconds float
function ABP_PartInfo_C:ReceiveTick(DeltaSeconds) end
---@param OwnerPart UJunkyardCarPartCustomizable
function ABP_PartInfo_C:SetupWidget(OwnerPart) end
---@param EntryPoint int32
function ABP_PartInfo_C:ExecuteUbergraph_BP_PartInfo(EntryPoint) end


