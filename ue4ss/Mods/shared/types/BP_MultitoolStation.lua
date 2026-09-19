---@meta

---@class ABP_MultitoolStation_C : AJunkyardMultitoolStation
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotLight4 USpotLightComponent
---@field SM_FloodLightB_Light1 UStaticMeshComponent
---@field FloodLightMaterial UMaterialInstanceDynamic
local ABP_MultitoolStation_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ABP_MultitoolStation_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_MultitoolStation_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param bOn boolean
function ABP_MultitoolStation_C:ToggleMultitoolLights(bOn) end
---@return FName
function ABP_MultitoolStation_C:GetInteractionName() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_MultitoolStation_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
function ABP_MultitoolStation_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABP_MultitoolStation_C:ExecuteUbergraph_BP_MultitoolStation(EntryPoint) end


