---@meta

---@class UHeadBase_ABP_C : UHumanAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_PoseBlendNode FAnimNode_PoseBlendNode
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_CopyPoseFromMesh FAnimNode_CopyPoseFromMesh
---@field AnimGraphNode_Slot FAnimNode_Slot
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field AnimGraphNode_LookAt_1 FAnimNode_LookAt
---@field AnimGraphNode_LookAt FAnimNode_LookAt
---@field AnimGraphNode_LocalToComponentSpace FAnimNode_ConvertLocalToComponentSpace
---@field AnimGraphNode_ComponentToLocalSpace FAnimNode_ConvertComponentToLocalSpace
---@field ['Pose Asset'] UPoseAsset
---@field LookAtAlpha float
---@field NPC_Base AAICharacterBase
---@field FDialogs TArray<FFDialogs>
---@field ['Dialog ID'] int32
local UHeadBase_ABP_C = {}

---@param AnimGraph FPoseLink
function UHeadBase_ABP_C:AnimGraph(AnimGraph) end
---@param Loaded UObject
function UHeadBase_ABP_C:OnLoaded_853D5A3042C3C59F901FA79973DD2F72(Loaded) end
---@param NotifyName FName
function UHeadBase_ABP_C:OnNotifyEnd_B6A219134F4EE79680F059AC46F59CA3(NotifyName) end
---@param NotifyName FName
function UHeadBase_ABP_C:OnNotifyBegin_B6A219134F4EE79680F059AC46F59CA3(NotifyName) end
---@param NotifyName FName
function UHeadBase_ABP_C:OnInterrupted_B6A219134F4EE79680F059AC46F59CA3(NotifyName) end
---@param NotifyName FName
function UHeadBase_ABP_C:OnBlendOut_B6A219134F4EE79680F059AC46F59CA3(NotifyName) end
---@param NotifyName FName
function UHeadBase_ABP_C:OnCompleted_B6A219134F4EE79680F059AC46F59CA3(NotifyName) end
---@param Loaded UObject
function UHeadBase_ABP_C:OnLoaded_DEE415834D16B1C2FE2B579D186C51DC(Loaded) end
---@param DeltaTimeX float
function UHeadBase_ABP_C:BlueprintUpdateAnimation(DeltaTimeX) end
function UHeadBase_ABP_C:BlueprintInitializeAnimation() end
---@param DialogID int32
---@param AICharacterBase AAICharacterBase
function UHeadBase_ABP_C:DialogMontage(DialogID, AICharacterBase) end
function UHeadBase_ABP_C:EndSearch() end
function UHeadBase_ABP_C:BlueprintBeginPlay() end
---@param EntryPoint int32
function UHeadBase_ABP_C:ExecuteUbergraph_HeadBase_ABP(EntryPoint) end


