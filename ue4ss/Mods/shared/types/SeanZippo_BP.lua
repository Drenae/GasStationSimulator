---@meta

---@class ASeanZippo_BP_C : AJoeAccesories_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field P_ZIppoLighter UParticleSystemComponent
---@field SpawnedParticle UParticleSystemComponent
local ASeanZippo_BP_C = {}

---@param NotifyName FName
function ASeanZippo_BP_C:OnNotifyEnd_9C0F3E4D43B00D8C897BA0A43D821F62(NotifyName) end
---@param NotifyName FName
function ASeanZippo_BP_C:OnNotifyBegin_9C0F3E4D43B00D8C897BA0A43D821F62(NotifyName) end
---@param NotifyName FName
function ASeanZippo_BP_C:OnInterrupted_9C0F3E4D43B00D8C897BA0A43D821F62(NotifyName) end
---@param NotifyName FName
function ASeanZippo_BP_C:OnBlendOut_9C0F3E4D43B00D8C897BA0A43D821F62(NotifyName) end
---@param NotifyName FName
function ASeanZippo_BP_C:OnCompleted_9C0F3E4D43B00D8C897BA0A43D821F62(NotifyName) end
function ASeanZippo_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ASeanZippo_BP_C:ExecuteUbergraph_SeanZippo_BP(EntryPoint) end


