#ifndef UE4SS_SDK_GarageDoor_AnimBP_HPP
#define UE4SS_SDK_GarageDoor_AnimBP_HPP

class UGarageDoor_AnimBP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x02F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0320 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0348 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x03C8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x03F8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0478 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x04A8 (size: 0xB0)
    bool IsOpen;                                                                      // 0x0558 (size: 0x1)
    class AActor* OwnerActor;                                                         // 0x0560 (size: 0x8)
    bool HasCollision;                                                                // 0x0568 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void PlaySoundAttached(class USoundBase* Sound);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_AnimBP_AnimGraphNode_TransitionResult_79B8B1714BD28317C978D084EE63F41E();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void AnimNotify_CloseDoors();
    void AnimNotify_OpenDoors();
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_GarageDoor_AnimBP(int32 EntryPoint);
}; // Size: 0x569

#endif
