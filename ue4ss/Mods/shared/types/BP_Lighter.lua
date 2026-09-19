---@meta

---@class ABP_Lighter_C : APickableTool
---@field UberGraphFrame FPointerToUberGraphFrame
---@field fire UNiagaraComponent
---@field sparks UNiagaraComponent
---@field SparksCount int32
---@field SpaSettings USpaSettings
---@field HoldTime float
---@field bLighting boolean
---@field LighterWidget UWBP_Lighter_C
---@field PreviousPlayerRotation FRotator
---@field bOn boolean
local ABP_Lighter_C = {}

function ABP_Lighter_C:TurnOffLighter() end
function ABP_Lighter_C:TryLightLighter() end
---@param bOn boolean
function ABP_Lighter_C:IsLighterOn(bOn) end
function ABP_Lighter_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ABP_Lighter_C:ReceiveTick(DeltaSeconds) end
function ABP_Lighter_C:OnPutDown() end
---@param PickedUpPawn APawn
function ABP_Lighter_C:OnPickUp(PickedUpPawn) end
---@param bOn boolean
function ABP_Lighter_C:CancelLighter(bOn) end
---@param bIsPressed boolean
function ABP_Lighter_C:CustomEvent_0(bIsPressed) end
---@param EntryPoint int32
function ABP_Lighter_C:ExecuteUbergraph_BP_Lighter(EntryPoint) end


