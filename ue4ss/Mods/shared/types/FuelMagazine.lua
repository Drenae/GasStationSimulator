---@meta

---@class AFuelMagazine_C : AInteractableBuilding
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FuelWheel UChildActorComponent
---@field FuelPlace USceneComponent
---@field Open boolean
---@field NewVar_0 TSoftObjectPtr<UStaticMesh>
---@field Actor TSoftClassPtr<AActor>
local AFuelMagazine_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function AFuelMagazine_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
function AFuelMagazine_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AFuelMagazine_C:ExecuteUbergraph_FuelMagazine(EntryPoint) end


