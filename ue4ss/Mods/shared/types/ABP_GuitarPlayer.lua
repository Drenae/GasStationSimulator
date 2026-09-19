---@meta

---@class UABP_GuitarPlayer_C : UAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_SequencePlayer_9 FAnimNode_SequencePlayer
---@field AnimGraphNode_LayeredBoneBlend_2 FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_SequencePlayer_8 FAnimNode_SequencePlayer
---@field AnimGraphNode_BlendListByBool_1 FAnimNode_BlendListByBool
---@field AnimGraphNode_SequencePlayer_7 FAnimNode_SequencePlayer
---@field AnimGraphNode_LayeredBoneBlend_1 FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_BlendListByInt FAnimNode_BlendListByInt
---@field AnimGraphNode_SequencePlayer_6 FAnimNode_SequencePlayer
---@field AnimGraphNode_SequencePlayer_5 FAnimNode_SequencePlayer
---@field AnimGraphNode_SequencePlayer_4 FAnimNode_SequencePlayer
---@field AnimGraphNode_SequencePlayer_3 FAnimNode_SequencePlayer
---@field AnimGraphNode_SequencePlayer_2 FAnimNode_SequencePlayer
---@field AnimGraphNode_BlendListByBool FAnimNode_BlendListByBool
---@field AnimGraphNode_SaveCachedPose FAnimNode_SaveCachedPose
---@field AnimGraphNode_UseCachedPose_1 FAnimNode_UseCachedPose
---@field AnimGraphNode_SequencePlayer_1 FAnimNode_SequencePlayer
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_UseCachedPose FAnimNode_UseCachedPose
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field CurrentChordAnim UAnimSequenceBase
---@field PrevChordAnim UAnimSequenceBase
---@field IsChangingChord boolean
---@field Strum_E boolean
---@field Strum_B boolean
---@field Strum_G boolean
---@field Strum_D boolean
---@field Strum_A boolean
---@field Strum_ELow boolean
---@field Strum_All boolean
---@field CacheChordName FName
---@field CurrentChordName FName
---@field UGP_Player AUGP_Player_C
---@field StrumFrameCounter int32
---@field FC_E int32
---@field FC_B int32
---@field FC_G int32
---@field FC_D int32
---@field FC_A int32
---@field FC_ELow int32
---@field FC_All int32
---@field ResetCount int32
---@field ThumbStrumIndex int32
local UABP_GuitarPlayer_C = {}

---@param AnimGraph FPoseLink
function UABP_GuitarPlayer_C:AnimGraph(AnimGraph) end
---@param FC_String int32
---@param StrumBool boolean
function UABP_GuitarPlayer_C:ResetStrumBoolByFC(FC_String, StrumBool) end
function UABP_GuitarPlayer_C:EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GuitarPlayer_AnimGraphNode_SequencePlayer_374BAA8D4286829F419C0A8D7258EB76() end
function UABP_GuitarPlayer_C:EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GuitarPlayer_AnimGraphNode_SequencePlayer_CCE79EA0473309A16FAE8EBFF693CEDE() end
function UABP_GuitarPlayer_C:EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GuitarPlayer_AnimGraphNode_SequencePlayer_1282386741B1A698A699279FCB38E71C() end
function UABP_GuitarPlayer_C:EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GuitarPlayer_AnimGraphNode_SequencePlayer_F510A1D744E0723F44641A815995C169() end
function UABP_GuitarPlayer_C:EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GuitarPlayer_AnimGraphNode_SequencePlayer_887AF5774CA44F3AFD73D3944406DE8D() end
function UABP_GuitarPlayer_C:EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GuitarPlayer_AnimGraphNode_SequencePlayer_99DECF2847CAA1B3D37779BEA7843BED() end
---@param DeltaTimeX float
function UABP_GuitarPlayer_C:BlueprintUpdateAnimation(DeltaTimeX) end
function UABP_GuitarPlayer_C:ChangeChord() end
---@param StringName FString
function UABP_GuitarPlayer_C:StrumString(StringName) end
function UABP_GuitarPlayer_C:CountFrame() end
---@param EntryPoint int32
function UABP_GuitarPlayer_C:ExecuteUbergraph_ABP_GuitarPlayer(EntryPoint) end


