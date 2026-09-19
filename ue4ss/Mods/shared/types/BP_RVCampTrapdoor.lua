---@meta

---@class ABP_RVCampTrapdoor_C : ATrapDoor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Audio UAudioComponent
---@field Niagara UNiagaraComponent
---@field InteractBox UBoxComponent
---@field Timer FTimerHandle
local ABP_RVCampTrapdoor_C = {}

---@return FName
function ABP_RVCampTrapdoor_C:GetInteractionName() end
---@return boolean
function ABP_RVCampTrapdoor_C:CanTeleport() end
function ABP_RVCampTrapdoor_C:PlayParticle() end
function ABP_RVCampTrapdoor_C:TurnOffParticle() end
function ABP_RVCampTrapdoor_C:OnCantTeleport() end
---@param EntryPoint int32
function ABP_RVCampTrapdoor_C:ExecuteUbergraph_BP_RVCampTrapdoor(EntryPoint) end


