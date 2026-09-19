---@meta

---@class AJoeAccesories_BP_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AccessorieParticle UParticleSystemComponent
---@field SkeletalMesh1 USkeletalMeshComponent
---@field SkeletalMesh USkeletalMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field LifeTime float
---@field DynamicMaterialInstance UMaterialInstanceDynamic
local AJoeAccesories_BP_C = {}

function AJoeAccesories_BP_C:Destroy() end
function AJoeAccesories_BP_C:DestroySelf() end
---@param EntryPoint int32
function AJoeAccesories_BP_C:ExecuteUbergraph_JoeAccesories_BP(EntryPoint) end


