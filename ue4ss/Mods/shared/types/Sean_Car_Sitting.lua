---@meta

---@class ASean_Car_Sitting_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotLight2 USpotLightComponent
---@field SpotLight1 USpotLightComponent
---@field Plane3 UStaticMeshComponent
---@field Plane2 UStaticMeshComponent
---@field Plane1 UStaticMeshComponent
---@field Plane UStaticMeshComponent
---@field SM_Mustang_Sean UStaticMeshComponent
---@field SM_topengine UStaticMeshComponent
---@field SM_spoiler_03 UStaticMeshComponent
---@field Arrow1 UArrowComponent
---@field NPSmartObject UNPSmartObjectComponent
---@field arrow UArrowComponent
---@field DefaultSceneRoot USceneComponent
local ASean_Car_Sitting_C = {}

function ASean_Car_Sitting_C:ReceiveBeginPlay() end
function ASean_Car_Sitting_C:EnableLights() end
---@param EndPlayReason EEndPlayReason::Type
function ASean_Car_Sitting_C:ReceiveEndPlay(EndPlayReason) end
---@param EntryPoint int32
function ASean_Car_Sitting_C:ExecuteUbergraph_Sean_Car_Sitting(EntryPoint) end


