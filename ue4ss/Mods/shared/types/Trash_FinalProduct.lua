---@meta

---@class ATrash_FinalProduct_C : A00_TrashItem_C
---@field UberGraphFrame FPointerToUberGraphFrame
local ATrash_FinalProduct_C = {}

function ATrash_FinalProduct_C:UserConstructionScript() end
function ATrash_FinalProduct_C:ReceiveBeginPlay() end
---@param HitComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param NormalImpulse FVector
---@param Hit FHitResult
function ATrash_FinalProduct_C:BndEvt__Trash_FinalProduct_MainMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(HitComponent, OtherActor, OtherComp, NormalImpulse, Hit) end
---@param EntryPoint int32
function ATrash_FinalProduct_C:ExecuteUbergraph_Trash_FinalProduct(EntryPoint) end


