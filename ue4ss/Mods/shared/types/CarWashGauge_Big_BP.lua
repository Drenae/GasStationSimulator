---@meta

---@class ACarWashGauge_Big_BP_C : ACarWashGauge
---@field UberGraphFrame FPointerToUberGraphFrame
local ACarWashGauge_Big_BP_C = {}

---@param Percentage float
function ACarWashGauge_Big_BP_C:UpdateGaugePosition(Percentage) end
function ACarWashGauge_Big_BP_C:ReceiveBeginPlay() end
---@param EndPlayReason EEndPlayReason::Type
function ACarWashGauge_Big_BP_C:ReceiveEndPlay(EndPlayReason) end
---@param NewValue float
function ACarWashGauge_Big_BP_C:OnCarWashPressureUpdated(NewValue) end
---@param GameLoaded boolean
function ACarWashGauge_Big_BP_C:OnFinishGameLoaded_Event_0(GameLoaded) end
---@param EntryPoint int32
function ACarWashGauge_Big_BP_C:ExecuteUbergraph_CarWashGauge_Big_BP(EntryPoint) end


