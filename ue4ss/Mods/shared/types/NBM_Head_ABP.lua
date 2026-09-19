---@meta

---@class UNBM_Head_ABP_C : UAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_CopyPoseFromMesh FAnimNode_CopyPoseFromMesh
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_PoseBlendNode FAnimNode_PoseBlendNode
---@field AnimGraphNode_Slot FAnimNode_Slot
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field ['Pose Asset'] UPoseAsset
---@field NPC_Base AAICharacterBase
---@field ['Dialog ID'] int32
---@field FDialogs TArray<FFDialogs>
local UNBM_Head_ABP_C = {}

---@param AnimGraph FPoseLink
function UNBM_Head_ABP_C:AnimGraph(AnimGraph) end
---@param Loaded UObject
function UNBM_Head_ABP_C:OnLoaded_6147E9AE488349634DA9C4A6551AFECA(Loaded) end
---@param Loaded UObject
function UNBM_Head_ABP_C:OnLoaded_DB675CF743F7578101EBA9A899287EDA(Loaded) end
---@param NotifyName FName
function UNBM_Head_ABP_C:OnNotifyEnd_4721C8964C850E9F8AB75BBB1AE1D1BD(NotifyName) end
---@param NotifyName FName
function UNBM_Head_ABP_C:OnNotifyBegin_4721C8964C850E9F8AB75BBB1AE1D1BD(NotifyName) end
---@param NotifyName FName
function UNBM_Head_ABP_C:OnInterrupted_4721C8964C850E9F8AB75BBB1AE1D1BD(NotifyName) end
---@param NotifyName FName
function UNBM_Head_ABP_C:OnBlendOut_4721C8964C850E9F8AB75BBB1AE1D1BD(NotifyName) end
---@param NotifyName FName
function UNBM_Head_ABP_C:OnCompleted_4721C8964C850E9F8AB75BBB1AE1D1BD(NotifyName) end
function UNBM_Head_ABP_C:BlueprintInitializeAnimation() end
---@param DialogID int32
---@param AICharacterBase AAICharacterBase
function UNBM_Head_ABP_C:OnStartDialogAnim_Event_0(DialogID, AICharacterBase) end
function UNBM_Head_ABP_C:EndSearch() end
---@param EntryPoint int32
function UNBM_Head_ABP_C:ExecuteUbergraph_NBM_Head_ABP(EntryPoint) end


