---@meta

---@class AOpenMagazine_C : AInteractableBuilding
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Lever USkeletalMeshComponent
---@field OverlapBox AActor
local AOpenMagazine_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function AOpenMagazine_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AOpenMagazine_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param NotifyName FName
function AOpenMagazine_C:OnNotifyEnd_94889A63499A609AA294EB8CA4270D38(NotifyName) end
---@param NotifyName FName
function AOpenMagazine_C:OnNotifyBegin_94889A63499A609AA294EB8CA4270D38(NotifyName) end
---@param NotifyName FName
function AOpenMagazine_C:OnInterrupted_94889A63499A609AA294EB8CA4270D38(NotifyName) end
---@param NotifyName FName
function AOpenMagazine_C:OnBlendOut_94889A63499A609AA294EB8CA4270D38(NotifyName) end
---@param NotifyName FName
function AOpenMagazine_C:OnCompleted_94889A63499A609AA294EB8CA4270D38(NotifyName) end
---@param NotifyName FName
function AOpenMagazine_C:OnNotifyEnd_941343294885A4C079AF7B92CAD02942(NotifyName) end
---@param NotifyName FName
function AOpenMagazine_C:OnNotifyBegin_941343294885A4C079AF7B92CAD02942(NotifyName) end
---@param NotifyName FName
function AOpenMagazine_C:OnInterrupted_941343294885A4C079AF7B92CAD02942(NotifyName) end
---@param NotifyName FName
function AOpenMagazine_C:OnBlendOut_941343294885A4C079AF7B92CAD02942(NotifyName) end
---@param NotifyName FName
function AOpenMagazine_C:OnCompleted_941343294885A4C079AF7B92CAD02942(NotifyName) end
---@param NotifyName FName
function AOpenMagazine_C:OnNotifyEnd_E40374594FBD63F41179F98FA1AF8950(NotifyName) end
---@param NotifyName FName
function AOpenMagazine_C:OnNotifyBegin_E40374594FBD63F41179F98FA1AF8950(NotifyName) end
---@param NotifyName FName
function AOpenMagazine_C:OnInterrupted_E40374594FBD63F41179F98FA1AF8950(NotifyName) end
---@param NotifyName FName
function AOpenMagazine_C:OnBlendOut_E40374594FBD63F41179F98FA1AF8950(NotifyName) end
---@param NotifyName FName
function AOpenMagazine_C:OnCompleted_E40374594FBD63F41179F98FA1AF8950(NotifyName) end
---@param NotifyName FName
function AOpenMagazine_C:OnNotifyEnd_6A54F01F41B2D4F881F2248C2D61C93B(NotifyName) end
---@param NotifyName FName
function AOpenMagazine_C:OnNotifyBegin_6A54F01F41B2D4F881F2248C2D61C93B(NotifyName) end
---@param NotifyName FName
function AOpenMagazine_C:OnInterrupted_6A54F01F41B2D4F881F2248C2D61C93B(NotifyName) end
---@param NotifyName FName
function AOpenMagazine_C:OnBlendOut_6A54F01F41B2D4F881F2248C2D61C93B(NotifyName) end
---@param NotifyName FName
function AOpenMagazine_C:OnCompleted_6A54F01F41B2D4F881F2248C2D61C93B(NotifyName) end
---@param Pawn APawn
function AOpenMagazine_C:DisableInteractionInfo(Pawn) end
function AOpenMagazine_C:ActiveStation() end
function AOpenMagazine_C:ReceiveBeginPlay() end
---@param EndPlayReason EEndPlayReason::Type
function AOpenMagazine_C:ReceiveEndPlay(EndPlayReason) end
---@param EntryPoint int32
function AOpenMagazine_C:ExecuteUbergraph_OpenMagazine(EntryPoint) end


