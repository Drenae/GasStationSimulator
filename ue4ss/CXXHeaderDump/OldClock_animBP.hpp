#ifndef UE4SS_SDK_OldClock_animBP_HPP
#define UE4SS_SDK_OldClock_animBP_HPP

class UOldClock_animBP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x02F8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0378 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x03A8 (size: 0xB0)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0458 (size: 0x48)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x04A0 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0560 (size: 0x80)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x05E0 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x06E8 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x07F0 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0810 (size: 0x20)
    int32 MInuty;                                                                     // 0x0830 (size: 0x4)
    int32 Hours;                                                                      // 0x0834 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_OldClock_animBP_AnimGraphNode_ModifyBone_9E5253C54AABE268DB6C29A9BE025EA7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_OldClock_animBP_AnimGraphNode_ModifyBone_509EA8FF4689CB1D62202295EED27E89();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void timeANimationCLock(const FTimeStruct UpdatedTime);
    void BlueprintBeginPlay();
    void ExecuteUbergraph_OldClock_animBP(int32 EntryPoint);
}; // Size: 0x838

#endif
