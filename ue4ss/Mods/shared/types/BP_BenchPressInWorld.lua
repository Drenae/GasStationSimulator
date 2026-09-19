---@meta

---@class ABP_BenchPressInWorld_C : ARvMinigameInWorldBenchPress
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpawnedBarbellREF ABP_BarbellForBench_C
---@field BenchPressWidgetREF UWBP_BenchPress_Service_C
---@field TempNpcReference AActor
---@field CustomerOnBenchREF AAICharacterBase
---@field CurrentUpDownDirection float
---@field CurrentLeftRightDirection float
---@field ['Original Customer Transform'] FTransform
---@field LastRawMouseInput float
---@field ['Setup Customer At Bench Timer'] FTimerHandle
local ABP_BenchPressInWorld_C = {}

function ABP_BenchPressInWorld_C:RemoveCustomerFromBench() end
function ABP_BenchPressInWorld_C:SetupCustomerAtBench() end
---@param Service ARvGuestServiceSpot
---@param ChosenDifficulty EGuestServiceDifficulty
function ABP_BenchPressInWorld_C:StartMiniGame(Service, ChosenDifficulty) end
---@param bSuccess boolean
function ABP_BenchPressInWorld_C:EndMinigame(bSuccess) end
---@param bIsPressed boolean
function ABP_BenchPressInWorld_C:OnEscape(bIsPressed) end
function ABP_BenchPressInWorld_C:DestroyBarbell() end
---@param Success boolean
function ABP_BenchPressInWorld_C:TryEndMInigameCustom(Success) end
---@param DeltaSeconds float
function ABP_BenchPressInWorld_C:ReceiveTick(DeltaSeconds) end
function ABP_BenchPressInWorld_C:TempNpcTickLogic() end
---@param Value float
function ABP_BenchPressInWorld_C:OnMoveForwardAction(Value) end
---@param Value float
function ABP_BenchPressInWorld_C:OnMoveRightAction(Value) end
---@param bIsPressed boolean
function ABP_BenchPressInWorld_C:OnJumpAction(bIsPressed) end
---@param Val float
function ABP_BenchPressInWorld_C:CustomEvent_0(Val) end
---@param EntryPoint int32
function ABP_BenchPressInWorld_C:ExecuteUbergraph_BP_BenchPressInWorld(EntryPoint) end


