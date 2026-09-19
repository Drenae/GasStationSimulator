#ifndef UE4SS_SDK_Alligator_AnimBP_HPP
#define UE4SS_SDK_Alligator_AnimBP_HPP

class UAlligator_AnimBP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x02F8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0378 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x03A8 (size: 0xB0)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0458 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_Alligator_AnimBP(int32 EntryPoint);
}; // Size: 0x4A0

#endif
