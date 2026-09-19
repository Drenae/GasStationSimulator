---@meta

---@class AMask_Decal_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Audio UAudioComponent
---@field Capsule UCapsuleComponent
---@field Decal1 UDecalComponent
---@field CurrentLife float
---@field DynamicMaterial UMaterialInstanceDynamic
---@field MaxLife float
local AMask_Decal_C = {}

function AMask_Decal_C:ReceiveBeginPlay() end
---@param Damage float
function AMask_Decal_C:TakeDamage(Damage) end
---@param EntryPoint int32
function AMask_Decal_C:ExecuteUbergraph_Mask_Decal(EntryPoint) end


