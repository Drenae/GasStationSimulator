---@meta

---@class ABP_GrinderStation_C : AGrinderStation
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AllowedAreaBox UBoxComponent
---@field SM_DeskLamp_03 UStaticMeshComponent
---@field SpotLight USpotLightComponent
local ABP_GrinderStation_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ABP_GrinderStation_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@return FName
function ABP_GrinderStation_C:GetInteractionName() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_GrinderStation_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function ABP_GrinderStation_C:BndEvt__BP_GrinderStation_AllowedAreaBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex) end
---@param EntryPoint int32
function ABP_GrinderStation_C:ExecuteUbergraph_BP_GrinderStation(EntryPoint) end


