---@meta

---@class AAnimationProp_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field StaticMesh UStaticMeshComponent
local AAnimationProp_C = {}

function AAnimationProp_C:Launch() end
function AAnimationProp_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AAnimationProp_C:ExecuteUbergraph_AnimationProp(EntryPoint) end


