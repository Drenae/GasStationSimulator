---@meta

---@class ATrashItem_VolcanoRock_C : A00_TrashItem_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VelocityTimer FTimerHandle
local ATrashItem_VolcanoRock_C = {}

---@param Pawn APawn
---@param Throw boolean
---@param AimingTime float
---@return boolean
function ATrashItem_VolcanoRock_C:UseItem(Pawn, Throw, AimingTime) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ATrashItem_VolcanoRock_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Impulse FVector
function ATrashItem_VolcanoRock_C:AddImpulseWhenPhysicsActive(Impulse) end
function ATrashItem_VolcanoRock_C:ReceiveBeginPlay() end
---@param GameLoaded boolean
function ATrashItem_VolcanoRock_C:OnFinishGameLoaded_Event_0(GameLoaded) end
function ATrashItem_VolcanoRock_C:CheckForEnableNavigation() end
function ATrashItem_VolcanoRock_C:CheckVelocity() end
---@param EntryPoint int32
function ATrashItem_VolcanoRock_C:ExecuteUbergraph_TrashItem_VolcanoRock(EntryPoint) end


