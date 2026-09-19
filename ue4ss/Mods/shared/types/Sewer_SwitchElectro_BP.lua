---@meta

---@class ASewer_SwitchElectro_BP_C : ASwitch
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Timeline_0_Rotation_E761B9034D494DA06812F2A7BFC549FF FVector
---@field Timeline_0__Direction_E761B9034D494DA06812F2A7BFC549FF ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
local ASewer_SwitchElectro_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ASewer_SwitchElectro_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
function ASewer_SwitchElectro_BP_C:UserConstructionScript() end
function ASewer_SwitchElectro_BP_C:Timeline_0__FinishedFunc() end
function ASewer_SwitchElectro_BP_C:Timeline_0__UpdateFunc() end
---@param NewState ESwitchState
function ASewer_SwitchElectro_BP_C:OnStateUpdated(NewState) end
---@param EntryPoint int32
function ASewer_SwitchElectro_BP_C:ExecuteUbergraph_Sewer_SwitchElectro_BP(EntryPoint) end


