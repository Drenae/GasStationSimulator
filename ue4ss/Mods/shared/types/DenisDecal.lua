---@meta

---@class ADenisDecal_C : ADirtyDecal
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Fake boolean
---@field MaterialToSpawn TArray<TSoftObjectPtr<UMaterialInterface>>
---@field MaterialToSpawnStreamerMode TArray<TSoftObjectPtr<UMaterialInterface>>
---@field DenisDecal UMaterialInstanceDynamic
local ADenisDecal_C = {}

---@param Loaded UObject
function ADenisDecal_C:OnLoaded_9A6EB2FC4999F72242D153940538DDC3(Loaded) end
function ADenisDecal_C:ReceiveBeginPlay() end
function ADenisDecal_C:DestroySelf() end
---@param EntryPoint int32
function ADenisDecal_C:ExecuteUbergraph_DenisDecal(EntryPoint) end


