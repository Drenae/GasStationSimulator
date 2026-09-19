---@meta

---@class ACarWashStation_BP_C : ACarWashStation
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SM_Lever_Cover_Autmatic_ON_OFF UStaticMeshComponent
---@field SM_Lever_Cover_Closed_Open UStaticMeshComponent
---@field FuelCable UCableComponent
---@field TurnOnOffStationLever UChildActorComponent
---@field AutomaticOnOffLever UChildActorComponent
---@field carWashFloor_polySurface3 UStaticMeshComponent
---@field carWashFloor_polySurface2 UStaticMeshComponent
---@field CarWashStatic UStaticMeshComponent
local ACarWashStation_BP_C = {}

---@return FName
function ACarWashStation_BP_C:GetInteractionName() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ACarWashStation_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ACarWashStation_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ACarWashStation_BP_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
function ACarWashStation_BP_C:OpenCloseCarWash() end
function ACarWashStation_BP_C:AutomaticOnOff() end
function ACarWashStation_BP_C:ReceiveBeginPlay() end
---@param ActorLevel int32
function ACarWashStation_BP_C:UpdateLeverVisibilityStatus(ActorLevel) end
---@param GameLoaded boolean
function ACarWashStation_BP_C:OnGameLoaded(GameLoaded) end
function ACarWashStation_BP_C:SpecialOpenCloseEvent() end
---@param EntryPoint int32
function ACarWashStation_BP_C:ExecuteUbergraph_CarWashStation_BP(EntryPoint) end


