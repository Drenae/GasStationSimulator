---@meta

---@class ADirtIndicator_BP_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field WidgetText UWidgetComponent
---@field Widget UWidgetComponent
---@field StaticMesh UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field DynamicArrowMaterial UMaterialInstanceDynamic
local ADirtIndicator_BP_C = {}

---@param RenownValue float
function ADirtIndicator_BP_C:GetRenownValue(RenownValue) end
function ADirtIndicator_BP_C:ReceiveBeginPlay() end
---@param bLoaded boolean
function ADirtIndicator_BP_C:RegisterManagerEvent(bLoaded) end
---@param NewDirty float
function ADirtIndicator_BP_C:OnDirtyUpdated(NewDirty) end
function ADirtIndicator_BP_C:ReceiveDestroyed() end
function ADirtIndicator_BP_C:OnQueueUpdated() end
---@param EntryPoint int32
function ADirtIndicator_BP_C:ExecuteUbergraph_DirtIndicator_BP(EntryPoint) end


