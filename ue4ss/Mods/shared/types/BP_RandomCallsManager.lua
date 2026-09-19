---@meta

---@class ABP_RandomCallsManager_C : AAirstripRandomDialoguesManager
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
---@field TimeToTalk float
---@field PreviousJoePlaneState EJoeAirplaneState
local ABP_RandomCallsManager_C = {}

---@param DeltaSeconds float
function ABP_RandomCallsManager_C:ReceiveTick(DeltaSeconds) end
function ABP_RandomCallsManager_C:ReceiveBeginPlay() end
---@param DLCName EDLCName
---@param bActivated boolean
function ABP_RandomCallsManager_C:OnAirstipActivated(DLCName, bActivated) end
---@param EntryPoint int32
function ABP_RandomCallsManager_C:ExecuteUbergraph_BP_RandomCallsManager(EntryPoint) end


