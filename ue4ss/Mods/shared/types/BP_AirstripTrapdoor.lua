---@meta

---@class ABP_AirstripTrapdoor_C : ATrapDoor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Audio UAudioComponent
---@field Niagara UNiagaraComponent
---@field InteractBox UBoxComponent
---@field Timer FTimerHandle
local ABP_AirstripTrapdoor_C = {}

---@return FName
function ABP_AirstripTrapdoor_C:GetInteractionName() end
---@return boolean
function ABP_AirstripTrapdoor_C:CanTeleport() end
function ABP_AirstripTrapdoor_C:PlayParticle() end
function ABP_AirstripTrapdoor_C:TurnOffParticle() end
function ABP_AirstripTrapdoor_C:OnCantTeleport() end
---@param EntryPoint int32
function ABP_AirstripTrapdoor_C:ExecuteUbergraph_BP_AirstripTrapdoor(EntryPoint) end


