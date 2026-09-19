---@meta

---@class UCarCrusher_ABP_C : UCarCrusher_AnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_TransitionResult_3 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_2 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_1 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult FAnimNode_TransitionResult
---@field AnimGraphNode_SequencePlayer_3 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_3 FAnimNode_StateResult
---@field AnimGraphNode_Slot_1 FAnimNode_Slot
---@field AnimGraphNode_SequencePlayer_2 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_2 FAnimNode_StateResult
---@field AnimGraphNode_SequencePlayer_1 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_1 FAnimNode_StateResult
---@field AnimGraphNode_Slot FAnimNode_Slot
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult FAnimNode_StateResult
---@field AnimGraphNode_StateMachine FAnimNode_StateMachine
local UCarCrusher_ABP_C = {}

---@param AnimGraph FPoseLink
function UCarCrusher_ABP_C:AnimGraph(AnimGraph) end
---@param NotifyName FName
function UCarCrusher_ABP_C:OnBlendOut_54BE018F497B3187AAE42392F5F4A3DF(NotifyName) end
---@param NotifyName FName
function UCarCrusher_ABP_C:OnCompleted_54BE018F497B3187AAE42392F5F4A3DF(NotifyName) end
---@param NotifyName FName
function UCarCrusher_ABP_C:OnInterrupted_54BE018F497B3187AAE42392F5F4A3DF(NotifyName) end
---@param NotifyName FName
function UCarCrusher_ABP_C:OnNotifyBegin_54BE018F497B3187AAE42392F5F4A3DF(NotifyName) end
---@param NotifyName FName
function UCarCrusher_ABP_C:OnNotifyEnd_54BE018F497B3187AAE42392F5F4A3DF(NotifyName) end
function UCarCrusher_ABP_C:AnimNotify_LidOpenStarted() end
function UCarCrusher_ABP_C:AnimNotify_LidOpenFinished() end
function UCarCrusher_ABP_C:AnimNotify_LidCloseStarted() end
function UCarCrusher_ABP_C:AnimNotify_LidCloseFinished() end
function UCarCrusher_ABP_C:StartCrushing() end
---@param EntryPoint int32
function UCarCrusher_ABP_C:ExecuteUbergraph_CarCrusher_ABP(EntryPoint) end


