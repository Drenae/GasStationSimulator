---@meta

---@class AJoeZippo_BP_C : AJoeAccesories_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field P_ZIppoLighter UParticleSystemComponent
---@field SpawnedParticle UParticleSystemComponent
local AJoeZippo_BP_C = {}

---@param NotifyName FName
function AJoeZippo_BP_C:OnNotifyEnd_71E6A528412D1DEE98C591AB7BD5116F(NotifyName) end
---@param NotifyName FName
function AJoeZippo_BP_C:OnNotifyBegin_71E6A528412D1DEE98C591AB7BD5116F(NotifyName) end
---@param NotifyName FName
function AJoeZippo_BP_C:OnInterrupted_71E6A528412D1DEE98C591AB7BD5116F(NotifyName) end
---@param NotifyName FName
function AJoeZippo_BP_C:OnBlendOut_71E6A528412D1DEE98C591AB7BD5116F(NotifyName) end
---@param NotifyName FName
function AJoeZippo_BP_C:OnCompleted_71E6A528412D1DEE98C591AB7BD5116F(NotifyName) end
function AJoeZippo_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AJoeZippo_BP_C:ExecuteUbergraph_JoeZippo_BP(EntryPoint) end


