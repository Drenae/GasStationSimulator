---@meta

---@class ASM_RoofTurbube_Moving_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field StaticMesh UStaticMeshComponent
---@field SM_RoofTurbine_01_Part_A UStaticMeshComponent
local ASM_RoofTurbube_Moving_C = {}

---@param DeltaSeconds float
function ASM_RoofTurbube_Moving_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ASM_RoofTurbube_Moving_C:ExecuteUbergraph_SM_RoofTurbube_Moving(EntryPoint) end


