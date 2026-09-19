---@meta

---@class UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C : UPilotsAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_Slot FAnimNode_Slot
---@field AnimGraphNode_BlendListByBool FAnimNode_BlendListByBool
---@field AnimGraphNode_SequencePlayer_1 FAnimNode_SequencePlayer
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field bUnMount boolean
---@field bUnPaitentA boolean
---@field bUnPaitentB boolean
---@field bSavedUnMounted boolean
---@field ['As Trading Airplane'] ATradingAirplane
---@field bSavedMounted boolean
---@field bMountIdle boolean
---@field ['As Pilot Character'] APilotCharacter
local UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C = {}

---@param AnimGraph FPoseLink
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:AnimGraph(AnimGraph) end
UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C['Handle Saved States'] = function(self, ) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnNotifyBegin_B61739A5411D12A3B0B7869B3326D0F7(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnInterrupted_B61739A5411D12A3B0B7869B3326D0F7(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnBlendOut_B61739A5411D12A3B0B7869B3326D0F7(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnCompleted_B61739A5411D12A3B0B7869B3326D0F7(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnNotifyEnd_32F275FA4C467F4614DA5FBAC2E84EC3(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnNotifyBegin_32F275FA4C467F4614DA5FBAC2E84EC3(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnInterrupted_32F275FA4C467F4614DA5FBAC2E84EC3(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnBlendOut_32F275FA4C467F4614DA5FBAC2E84EC3(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnCompleted_32F275FA4C467F4614DA5FBAC2E84EC3(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnNotifyEnd_018797A148D853D95AC3E0AF97313548(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnNotifyBegin_018797A148D853D95AC3E0AF97313548(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnInterrupted_018797A148D853D95AC3E0AF97313548(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnBlendOut_018797A148D853D95AC3E0AF97313548(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnCompleted_018797A148D853D95AC3E0AF97313548(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnNotifyEnd_CA316C16458AD1314980D7AD5B360173(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnNotifyBegin_CA316C16458AD1314980D7AD5B360173(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnInterrupted_CA316C16458AD1314980D7AD5B360173(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnBlendOut_CA316C16458AD1314980D7AD5B360173(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnCompleted_CA316C16458AD1314980D7AD5B360173(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnNotifyEnd_109E5790466EFB8899361A9E9996E1A8(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnNotifyBegin_109E5790466EFB8899361A9E9996E1A8(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnInterrupted_109E5790466EFB8899361A9E9996E1A8(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnBlendOut_109E5790466EFB8899361A9E9996E1A8(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnCompleted_109E5790466EFB8899361A9E9996E1A8(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnNotifyEnd_ECCD34014289344095326584BFDA2843(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnNotifyBegin_ECCD34014289344095326584BFDA2843(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnInterrupted_ECCD34014289344095326584BFDA2843(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnBlendOut_ECCD34014289344095326584BFDA2843(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnCompleted_ECCD34014289344095326584BFDA2843(NotifyName) end
---@param NotifyName FName
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnNotifyEnd_B61739A5411D12A3B0B7869B3326D0F7(NotifyName) end
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:BlueprintInitializeAnimation() end
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:OnMontageStateChanged() end
---@param DeltaTimeX float
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:BlueprintUpdateAnimation(DeltaTimeX) end
---@param EntryPoint int32
function UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C:ExecuteUbergraph_Fe_Pilot_Body_SK_Skeleton_AnimBlueprint(EntryPoint) end


