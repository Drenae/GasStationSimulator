---@meta

---@class ASeanSittingCigarette_BP_C : AJoeAccesories_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NS_CigSmoke UNiagaraComponent
---@field PointLight UPointLightComponent
local ASeanSittingCigarette_BP_C = {}

function ASeanSittingCigarette_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ASeanSittingCigarette_BP_C:ExecuteUbergraph_SeanSittingCigarette_BP(EntryPoint) end


