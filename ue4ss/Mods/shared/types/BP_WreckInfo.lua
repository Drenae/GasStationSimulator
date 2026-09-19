---@meta

---@class ABP_WreckInfo_C : ACarWreck_Tooltip
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RightPoint USceneComponent
---@field LeftPOint USceneComponent
---@field Widget UWidgetComponent
---@field OwnerWreck AJunkyardCarWreck
local ABP_WreckInfo_C = {}

---@param DeltaSeconds float
function ABP_WreckInfo_C:ReceiveTick(DeltaSeconds) end
---@param CarWreck AJunkyardCarWreck
function ABP_WreckInfo_C:SetupWidget(CarWreck) end
---@param EntryPoint int32
function ABP_WreckInfo_C:ExecuteUbergraph_BP_WreckInfo(EntryPoint) end


