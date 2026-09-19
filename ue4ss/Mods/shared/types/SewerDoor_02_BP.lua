---@meta

---@class ASewerDoor_02_BP_C : ADoor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Timeline_0_Rotation_77CB4953417101F67DF607A6945FE535 FVector
---@field Timeline_0__Direction_77CB4953417101F67DF607A6945FE535 ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
local ASewerDoor_02_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ASewerDoor_02_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ASewerDoor_02_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ASewerDoor_02_BP_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
function ASewerDoor_02_BP_C:UserConstructionScript() end
function ASewerDoor_02_BP_C:Timeline_0__FinishedFunc() end
function ASewerDoor_02_BP_C:Timeline_0__UpdateFunc() end
---@param NewState EDoorState
function ASewerDoor_02_BP_C:OnStateUpdated(NewState) end
---@param EntryPoint int32
function ASewerDoor_02_BP_C:ExecuteUbergraph_SewerDoor_02_BP(EntryPoint) end


