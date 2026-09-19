#ifndef UE4SS_SDK_Player_AnimBp_HPP
#define UE4SS_SDK_Player_AnimBp_HPP

class UPlayer_AnimBp_C : public UPlayerAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0328 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0358 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0380 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x03A8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x03D0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x03F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0420 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x0448 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x04C8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x04F8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0578 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x05A8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0628 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0658 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x06D8 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0708 (size: 0xE8)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x07F0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0820 (size: 0xB0)
    FAnimNode_Slot AnimGraphNode_Slot_1;                                              // 0x08D0 (size: 0x48)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0918 (size: 0xC0)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x09D8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0A20 (size: 0x80)
    float Speed;                                                                      // 0x0AA0 (size: 0x4)
    bool IsInAir;                                                                     // 0x0AA4 (size: 0x1)
    bool Stinkbomb;                                                                   // 0x0AA5 (size: 0x1)
    class UParticleSystemComponent* BloodParticle;                                    // 0x0AA8 (size: 0x8)
    float CameraAnimAlpha;                                                            // 0x0AB0 (size: 0x4)
    class AActor* SpawnedBeerBottle;                                                  // 0x0AB8 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBp_AnimGraphNode_LayeredBoneBlend_04D286C54243AEFFE672529A4EC3FBB5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBp_AnimGraphNode_TransitionResult_B623E50441923A364183B8B38438E6C5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBp_AnimGraphNode_TransitionResult_FC199EB34C3C33AB49CF1C843D9F1ABD();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void AnimNotify_BlackOut();
    void AnimNotify_BloodSplatter();
    void AnimNotify_RemoveBloodSplatter();
    void AnimNotify_SlowBlackOut();
    void ExecuteUbergraph_Player_AnimBp(int32 EntryPoint);
}; // Size: 0xAC0

#endif
