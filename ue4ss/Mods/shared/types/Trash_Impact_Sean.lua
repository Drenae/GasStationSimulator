---@meta

---@class ATrash_Impact_Sean_C : ATrashItem_PrologueTrash_C
---@field UberGraphFrame FPointerToUberGraphFrame
local ATrash_Impact_Sean_C = {}

---@param MyComp UPrimitiveComponent
---@param Other AActor
---@param OtherComp UPrimitiveComponent
---@param bSelfMoved boolean
---@param HitLocation FVector
---@param HitNormal FVector
---@param NormalImpulse FVector
---@param Hit FHitResult
function ATrash_Impact_Sean_C:ReceiveHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit) end
function ATrash_Impact_Sean_C:ReceiveBeginPlay() end
function ATrash_Impact_Sean_C:DisableSound() end
---@param EntryPoint int32
function ATrash_Impact_Sean_C:ExecuteUbergraph_Trash_Impact_Sean(EntryPoint) end


