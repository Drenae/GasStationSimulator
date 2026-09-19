---@meta

---@class ASewerValve_01_BP_C : ASwitch
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Timeline_0_Rotation_653681CD400D43CF8E7B43B05BB76A42 FVector
---@field Timeline_0_Time_653681CD400D43CF8E7B43B05BB76A42 float
---@field Timeline_0__Direction_653681CD400D43CF8E7B43B05BB76A42 ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
---@field AirSound UAudioComponent
local ASewerValve_01_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ASewerValve_01_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
function ASewerValve_01_BP_C:UserConstructionScript() end
function ASewerValve_01_BP_C:Timeline_0__FinishedFunc() end
function ASewerValve_01_BP_C:Timeline_0__UpdateFunc() end
---@param NewState ESwitchState
function ASewerValve_01_BP_C:OnStateUpdated(NewState) end
function ASewerValve_01_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ASewerValve_01_BP_C:ExecuteUbergraph_SewerValve_01_BP(EntryPoint) end


