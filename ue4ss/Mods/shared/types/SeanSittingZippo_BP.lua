---@meta

---@class ASeanSittingZippo_BP_C : AJoeAccesories_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field P_ZIppoLighter UParticleSystemComponent
---@field SpawnedParticle UParticleSystemComponent
local ASeanSittingZippo_BP_C = {}

---@param NotifyName FName
function ASeanSittingZippo_BP_C:OnNotifyEnd_713AC35B4E25FE5D531D729DE5010D2B(NotifyName) end
---@param NotifyName FName
function ASeanSittingZippo_BP_C:OnNotifyBegin_713AC35B4E25FE5D531D729DE5010D2B(NotifyName) end
---@param NotifyName FName
function ASeanSittingZippo_BP_C:OnInterrupted_713AC35B4E25FE5D531D729DE5010D2B(NotifyName) end
---@param NotifyName FName
function ASeanSittingZippo_BP_C:OnBlendOut_713AC35B4E25FE5D531D729DE5010D2B(NotifyName) end
---@param NotifyName FName
function ASeanSittingZippo_BP_C:OnCompleted_713AC35B4E25FE5D531D729DE5010D2B(NotifyName) end
function ASeanSittingZippo_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ASeanSittingZippo_BP_C:ExecuteUbergraph_SeanSittingZippo_BP(EntryPoint) end


