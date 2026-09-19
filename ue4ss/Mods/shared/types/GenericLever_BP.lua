---@meta

---@class AGenericLever_BP_C : AInteractableBuilding
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Lever USkeletalMeshComponent
---@field OverlapBox AActor
---@field LeverIsOn boolean
---@field LeverStateChanged FGenericLever_BP_CLeverStateChanged
local AGenericLever_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function AGenericLever_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AGenericLever_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param NotifyName FName
function AGenericLever_BP_C:OnNotifyEnd_E886366148582089EAD9A089F6F69F42(NotifyName) end
---@param NotifyName FName
function AGenericLever_BP_C:OnNotifyBegin_E886366148582089EAD9A089F6F69F42(NotifyName) end
---@param NotifyName FName
function AGenericLever_BP_C:OnInterrupted_E886366148582089EAD9A089F6F69F42(NotifyName) end
---@param NotifyName FName
function AGenericLever_BP_C:OnBlendOut_E886366148582089EAD9A089F6F69F42(NotifyName) end
---@param NotifyName FName
function AGenericLever_BP_C:OnCompleted_E886366148582089EAD9A089F6F69F42(NotifyName) end
---@param NotifyName FName
function AGenericLever_BP_C:OnNotifyEnd_D16CB3D04CC2AD0EBBBEABA0442FCC06(NotifyName) end
---@param NotifyName FName
function AGenericLever_BP_C:OnNotifyBegin_D16CB3D04CC2AD0EBBBEABA0442FCC06(NotifyName) end
---@param NotifyName FName
function AGenericLever_BP_C:OnInterrupted_D16CB3D04CC2AD0EBBBEABA0442FCC06(NotifyName) end
---@param NotifyName FName
function AGenericLever_BP_C:OnBlendOut_D16CB3D04CC2AD0EBBBEABA0442FCC06(NotifyName) end
---@param NotifyName FName
function AGenericLever_BP_C:OnCompleted_D16CB3D04CC2AD0EBBBEABA0442FCC06(NotifyName) end
---@param NotifyName FName
function AGenericLever_BP_C:OnNotifyEnd_E041427240B2932A06A384912135B01F(NotifyName) end
---@param NotifyName FName
function AGenericLever_BP_C:OnNotifyBegin_E041427240B2932A06A384912135B01F(NotifyName) end
---@param NotifyName FName
function AGenericLever_BP_C:OnInterrupted_E041427240B2932A06A384912135B01F(NotifyName) end
---@param NotifyName FName
function AGenericLever_BP_C:OnBlendOut_E041427240B2932A06A384912135B01F(NotifyName) end
---@param NotifyName FName
function AGenericLever_BP_C:OnCompleted_E041427240B2932A06A384912135B01F(NotifyName) end
---@param NotifyName FName
function AGenericLever_BP_C:OnNotifyEnd_D7CB55A94E34625F0EE99E92AE39346E(NotifyName) end
---@param NotifyName FName
function AGenericLever_BP_C:OnNotifyBegin_D7CB55A94E34625F0EE99E92AE39346E(NotifyName) end
---@param NotifyName FName
function AGenericLever_BP_C:OnInterrupted_D7CB55A94E34625F0EE99E92AE39346E(NotifyName) end
---@param NotifyName FName
function AGenericLever_BP_C:OnBlendOut_D7CB55A94E34625F0EE99E92AE39346E(NotifyName) end
---@param NotifyName FName
function AGenericLever_BP_C:OnCompleted_D7CB55A94E34625F0EE99E92AE39346E(NotifyName) end
function AGenericLever_BP_C:ReceiveBeginPlay() end
function AGenericLever_BP_C:Animate() end
---@param Pawn APawn
function AGenericLever_BP_C:DisableInteractionInfo(Pawn) end
---@param EntryPoint int32
function AGenericLever_BP_C:ExecuteUbergraph_GenericLever_BP(EntryPoint) end
function AGenericLever_BP_C:LeverStateChanged__DelegateSignature() end


