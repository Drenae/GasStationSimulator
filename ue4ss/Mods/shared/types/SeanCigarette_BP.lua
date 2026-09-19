---@meta

---@class ASeanCigarette_BP_C : AJoeAccesories_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NS_CigSmoke UNiagaraComponent
---@field PointLight UPointLightComponent
---@field StaticMesh UStaticMeshComponent
local ASeanCigarette_BP_C = {}

function ASeanCigarette_BP_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ASeanCigarette_BP_C:ReceiveTick(DeltaSeconds) end
function ASeanCigarette_BP_C:LightUp_Cigarette() end
---@param EntryPoint int32
function ASeanCigarette_BP_C:ExecuteUbergraph_SeanCigarette_BP(EntryPoint) end


