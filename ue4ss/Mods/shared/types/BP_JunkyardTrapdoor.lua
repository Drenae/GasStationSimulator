---@meta

---@class ABP_JunkyardTrapdoor_C : ATrapDoor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SM_Custom_Wheel_05_Big1 UStaticMeshComponent
---@field SM_Custom_Wheel_05_Big UStaticMeshComponent
---@field Audio UAudioComponent
---@field Niagara UNiagaraComponent
---@field InteractBox UBoxComponent
---@field Timer FTimerHandle
local ABP_JunkyardTrapdoor_C = {}

---@return FName
function ABP_JunkyardTrapdoor_C:GetInteractionName() end
---@return boolean
function ABP_JunkyardTrapdoor_C:CanTeleport() end
function ABP_JunkyardTrapdoor_C:PlayParticle() end
function ABP_JunkyardTrapdoor_C:TurnOffParticle() end
function ABP_JunkyardTrapdoor_C:OnCantTeleport() end
---@param EntryPoint int32
function ABP_JunkyardTrapdoor_C:ExecuteUbergraph_BP_JunkyardTrapdoor(EntryPoint) end


