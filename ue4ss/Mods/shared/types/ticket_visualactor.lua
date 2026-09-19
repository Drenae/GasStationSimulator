---@meta

---@class Aticket_visualactor_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PointLight UPointLightComponent
---@field Widget UWidgetComponent
---@field PostapoSkeletalMesh UPostapoSkeletalMeshComponent
---@field DefaultSceneRoot USceneComponent
local Aticket_visualactor_C = {}

function Aticket_visualactor_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function Aticket_visualactor_C:ExecuteUbergraph_ticket_visualactor(EntryPoint) end


