---@meta

---@class ABP_CrushedCar_Color_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field arrow UArrowComponent
---@field SM_CrushedCar UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field Color FColor
---@field SecondsToStartDisappearing float
---@field ImmobileVelocityTreshold float
---@field CurrentImmobileTime float
---@field SinkingSpeed float
---@field DestroyHeight float
---@field IsSinking boolean
---@field MaterialInstance UMaterialInstanceDynamic
local ABP_CrushedCar_Color_C = {}

function ABP_CrushedCar_Color_C:UserConstructionScript() end
---@param DeltaSeconds float
function ABP_CrushedCar_Color_C:ReceiveTick(DeltaSeconds) end
---@param NewColor FColor
function ABP_CrushedCar_Color_C:UpdateColor(NewColor) end
---@param EntryPoint int32
function ABP_CrushedCar_Color_C:ExecuteUbergraph_BP_CrushedCar_Color(EntryPoint) end


