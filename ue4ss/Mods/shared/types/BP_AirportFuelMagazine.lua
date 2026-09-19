---@meta

---@class ABP_AirportFuelMagazine_C : AInteractableBuilding
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FuelWheel UChildActorComponent
---@field FuelPlace USceneComponent
---@field Open boolean
---@field NewVar_0 TSoftObjectPtr<UStaticMesh>
---@field Actor TSoftClassPtr<AActor>
local ABP_AirportFuelMagazine_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ABP_AirportFuelMagazine_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
function ABP_AirportFuelMagazine_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABP_AirportFuelMagazine_C:ExecuteUbergraph_BP_AirportFuelMagazine(EntryPoint) end


