#ifndef UE4SS_SDK_PaintRollerAnimBp_HPP
#define UE4SS_SDK_PaintRollerAnimBp_HPP

class UPaintRollerAnimBp_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x02F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0320 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0348 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x03C8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x03F8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0478 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x04A8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0528 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0558 (size: 0xB0)
    float Input;                                                                      // 0x0608 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_PaintRollerAnimBp_AnimGraphNode_TransitionResult_FCC99EEA4731D5F81D921C8B861E744E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_PaintRollerAnimBp_AnimGraphNode_TransitionResult_34AA61A846B3B9E2C16EFF9E6681C770();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_PaintRollerAnimBp(int32 EntryPoint);
}; // Size: 0x60C

#endif
