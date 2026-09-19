#ifndef UE4SS_SDK_Dennis_Animbp_HPP
#define UE4SS_SDK_Dennis_Animbp_HPP

class UDennis_Animbp_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x02C8 (size: 0x48)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;                            // 0x0310 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x0338 (size: 0x28)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;                          // 0x0360 (size: 0x158)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x04B8 (size: 0xC0)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0578 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x05A0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x05C8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x05F0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0618 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0640 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0668 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0690 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x06B8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0738 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0768 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x07E8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0818 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0898 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x08C8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0948 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0978 (size: 0xB0)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0A28 (size: 0x30)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x0A58 (size: 0x158)
    bool isPeaking;                                                                   // 0x0BB0 (size: 0x1)
    float UpperBAlpha;                                                                // 0x0BB4 (size: 0x4)
    FTransform PlayerTransform;                                                       // 0x0BC0 (size: 0x30)
    bool Stinkbomb;                                                                   // 0x0BF0 (size: 0x1)
    float LeftArmAlpha;                                                               // 0x0BF4 (size: 0x4)
    class UParticleSystemComponent* SprayParticleRef;                                 // 0x0BF8 (size: 0x8)
    float Speed;                                                                      // 0x0C00 (size: 0x4)
    bool CanPlayStop;                                                                 // 0x0C04 (size: 0x1)
    TEnumAsByte<EPathFollowingStatus::Type> AiMovementState;                          // 0x0C05 (size: 0x1)
    bool Can Set Next Sound;                                                          // 0x0C06 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void AllowNextSound();
    void PlaySound(class USoundBase* NewSound, bool CanInterrupt?);
    void getOwnerSkeletalMesh(class USkeletalMeshComponent*& Mesh);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Dennis_Animbp_AnimGraphNode_TransitionResult_4A9B95624637191B2C874B91ECC778AE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Dennis_Animbp_AnimGraphNode_TransitionResult_8E02D2374D8F6C1C9629888D55930E8E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Dennis_Animbp_AnimGraphNode_TransitionResult_1C5A710148C3FA904FACA2A9525D0B11();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Dennis_Animbp_AnimGraphNode_TransitionResult_21276A00469E6036DCD6679C04943B46();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Dennis_Animbp_AnimGraphNode_TransitionResult_F68C31614307E57F91B02599634A9D48();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void AnimNotify_SprayCanOn();
    void AnimNotify_SprayCanOff();
    void AnimNotify_bombThrow();
    void AnimNotify_BombSpawn();
    void RemovefakeBomb();
    void AnimNotify_SpawnSpray();
    void AnimNotify_DespawnSpray();
    void AnimNotify_Laughter();
    void AnimNotify_Laughter_02();
    void AnimNotify_Laughter_03();
    void AnimNotify_CanPlayStop();
    void AnimNotify_Can't PlayStop();
    void StopSprayingMontage();
    void DespawnSprayParticle();
    void ExecuteUbergraph_Dennis_Animbp(int32 EntryPoint);
}; // Size: 0xC07

#endif
