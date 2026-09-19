#ifndef UE4SS_SDK_SK_TicketValidator_ABP_HPP
#define UE4SS_SDK_SK_TicketValidator_ABP_HPP

class USK_TicketValidator_ABP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x02F8 (size: 0x48)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0340 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0368 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0390 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x03B8 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x03E0 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0460 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0490 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0510 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0540 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x05C0 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x05F0 (size: 0xE8)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x06D8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0708 (size: 0xB0)
    float Speed;                                                                      // 0x07B8 (size: 0x4)
    bool bInAir;                                                                      // 0x07BC (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_SK_TicketValidator_ABP(int32 EntryPoint);
}; // Size: 0x7BD

#endif
