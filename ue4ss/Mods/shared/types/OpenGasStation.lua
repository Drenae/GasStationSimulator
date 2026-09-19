---@meta

---@class AOpenGasStation_C : AInteractableBuilding
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Lever USkeletalMeshComponent
---@field OpenLogo AOpenGasStation_Logo_C
---@field ChunchumanchuOpenLogo AOpenGasStation_Logo_Chunchumanchu_Island_C
---@field bBlockOutline boolean
local AOpenGasStation_C = {}

---@return FName
function AOpenGasStation_C:GetInteractionName() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AOpenGasStation_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function AOpenGasStation_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AOpenGasStation_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param NotifyName FName
function AOpenGasStation_C:OnNotifyEnd_E2F7106F494D00B828C00AB58CC01EB5(NotifyName) end
---@param NotifyName FName
function AOpenGasStation_C:OnNotifyBegin_E2F7106F494D00B828C00AB58CC01EB5(NotifyName) end
---@param NotifyName FName
function AOpenGasStation_C:OnInterrupted_E2F7106F494D00B828C00AB58CC01EB5(NotifyName) end
---@param NotifyName FName
function AOpenGasStation_C:OnBlendOut_E2F7106F494D00B828C00AB58CC01EB5(NotifyName) end
---@param NotifyName FName
function AOpenGasStation_C:OnCompleted_E2F7106F494D00B828C00AB58CC01EB5(NotifyName) end
---@param NotifyName FName
function AOpenGasStation_C:OnNotifyEnd_6E0122734304B750A47DEBA060D79D38(NotifyName) end
---@param NotifyName FName
function AOpenGasStation_C:OnNotifyBegin_6E0122734304B750A47DEBA060D79D38(NotifyName) end
---@param NotifyName FName
function AOpenGasStation_C:OnInterrupted_6E0122734304B750A47DEBA060D79D38(NotifyName) end
---@param NotifyName FName
function AOpenGasStation_C:OnBlendOut_6E0122734304B750A47DEBA060D79D38(NotifyName) end
---@param NotifyName FName
function AOpenGasStation_C:OnCompleted_6E0122734304B750A47DEBA060D79D38(NotifyName) end
function AOpenGasStation_C:ReceiveBeginPlay() end
---@param Pawn APawn
function AOpenGasStation_C:DisableInteractionInfo(Pawn) end
---@param On boolean
function AOpenGasStation_C:EnableElectrocity(On) end
---@param bIsOpen boolean
function AOpenGasStation_C:OnGastStationOpened(bIsOpen) end
function AOpenGasStation_C:SpecialOpenCloseEvent() end
---@param EntryPoint int32
function AOpenGasStation_C:ExecuteUbergraph_OpenGasStation(EntryPoint) end


