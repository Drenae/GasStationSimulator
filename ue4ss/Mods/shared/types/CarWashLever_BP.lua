---@meta

---@class ACarWashLever_BP_C : AInteractableBuilding
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Lever USkeletalMeshComponent
---@field OverlapBox AActor
---@field LeverIsOn boolean
---@field LeverStateChanged FCarWashLever_BP_CLeverStateChanged
local ACarWashLever_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ACarWashLever_BP_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ACarWashLever_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ACarWashLever_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param NotifyName FName
function ACarWashLever_BP_C:OnNotifyEnd_76A58AD64E4B433DE3AA46949B002CAD(NotifyName) end
---@param NotifyName FName
function ACarWashLever_BP_C:OnNotifyBegin_76A58AD64E4B433DE3AA46949B002CAD(NotifyName) end
---@param NotifyName FName
function ACarWashLever_BP_C:OnInterrupted_76A58AD64E4B433DE3AA46949B002CAD(NotifyName) end
---@param NotifyName FName
function ACarWashLever_BP_C:OnBlendOut_76A58AD64E4B433DE3AA46949B002CAD(NotifyName) end
---@param NotifyName FName
function ACarWashLever_BP_C:OnCompleted_76A58AD64E4B433DE3AA46949B002CAD(NotifyName) end
---@param NotifyName FName
function ACarWashLever_BP_C:OnNotifyEnd_57F359D54D7519E306D170AD38C5FBAF(NotifyName) end
---@param NotifyName FName
function ACarWashLever_BP_C:OnNotifyBegin_57F359D54D7519E306D170AD38C5FBAF(NotifyName) end
---@param NotifyName FName
function ACarWashLever_BP_C:OnInterrupted_57F359D54D7519E306D170AD38C5FBAF(NotifyName) end
---@param NotifyName FName
function ACarWashLever_BP_C:OnBlendOut_57F359D54D7519E306D170AD38C5FBAF(NotifyName) end
---@param NotifyName FName
function ACarWashLever_BP_C:OnCompleted_57F359D54D7519E306D170AD38C5FBAF(NotifyName) end
---@param NotifyName FName
function ACarWashLever_BP_C:OnNotifyEnd_5C1F02844A018638606D7EB515FAD6B7(NotifyName) end
---@param NotifyName FName
function ACarWashLever_BP_C:OnNotifyBegin_5C1F02844A018638606D7EB515FAD6B7(NotifyName) end
---@param NotifyName FName
function ACarWashLever_BP_C:OnInterrupted_5C1F02844A018638606D7EB515FAD6B7(NotifyName) end
---@param NotifyName FName
function ACarWashLever_BP_C:OnBlendOut_5C1F02844A018638606D7EB515FAD6B7(NotifyName) end
---@param NotifyName FName
function ACarWashLever_BP_C:OnCompleted_5C1F02844A018638606D7EB515FAD6B7(NotifyName) end
---@param NotifyName FName
function ACarWashLever_BP_C:OnNotifyEnd_14547FB645207C32A5DBC9BC0517C31F(NotifyName) end
---@param NotifyName FName
function ACarWashLever_BP_C:OnNotifyBegin_14547FB645207C32A5DBC9BC0517C31F(NotifyName) end
---@param NotifyName FName
function ACarWashLever_BP_C:OnInterrupted_14547FB645207C32A5DBC9BC0517C31F(NotifyName) end
---@param NotifyName FName
function ACarWashLever_BP_C:OnBlendOut_14547FB645207C32A5DBC9BC0517C31F(NotifyName) end
---@param NotifyName FName
function ACarWashLever_BP_C:OnCompleted_14547FB645207C32A5DBC9BC0517C31F(NotifyName) end
function ACarWashLever_BP_C:ReceiveBeginPlay() end
function ACarWashLever_BP_C:Animate() end
---@param Pawn APawn
function ACarWashLever_BP_C:DisableInteractionInfo(Pawn) end
---@param EntryPoint int32
function ACarWashLever_BP_C:ExecuteUbergraph_CarWashLever_BP(EntryPoint) end
function ACarWashLever_BP_C:LeverStateChanged__DelegateSignature() end


