#ifndef UE4SS_SDK_ABP_Ruby_Body_HPP
#define UE4SS_SDK_ABP_Ruby_Body_HPP

class UABP_Ruby_Body_C : public UHumanAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0510 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0518 (size: 0x30)
    FAnimNode_DragonAimSolver AnimGraphNode_DragonAimSolver;                          // 0x0550 (size: 0x9D0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13;                     // 0x0F20 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;                     // 0x0F48 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;                     // 0x0F70 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;                     // 0x0F98 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;                      // 0x0FC0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;                      // 0x0FE8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;                      // 0x1010 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x1038 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x1060 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x1088 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x10B0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x10D8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x1100 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10;                         // 0x1128 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_9;                                // 0x11A8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;                          // 0x11D8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_8;                                // 0x1258 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;                          // 0x1288 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_7;                                // 0x1308 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;                          // 0x1338 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_6;                                // 0x13B8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x13E8 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;                          // 0x1410 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_5;                                // 0x1490 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;                          // 0x14C0 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x1540 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x1570 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x15F0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x1620 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x16A0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x16D0 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x1750 (size: 0x30)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x1780 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x1820 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x18A0 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x1920 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x1950 (size: 0xB0)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x1A00 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x1B58 (size: 0x28)
    FAnimNode_LegIK AnimGraphNode_LegIK_1;                                            // 0x1B80 (size: 0xF8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x1C78 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x1C98 (size: 0x20)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x1CB8 (size: 0x48)
    FAnimNode_LegIK AnimGraphNode_LegIK;                                              // 0x1D00 (size: 0xF8)
    FTransform PlayerTransform;                                                       // 0x1E00 (size: 0x30)
    bool bLookAt_0;                                                                   // 0x1E30 (size: 0x1)
    float LookAtAlpha;                                                                // 0x1E34 (size: 0x4)
    FVector PlayerLocation;                                                           // 0x1E38 (size: 0xC)
    bool ShouldLookAt;                                                                // 0x1E44 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void OnMontageStarted_Event_0(class UAnimMontage* Montage);
    void ExecuteUbergraph_ABP_Ruby_Body(int32 EntryPoint);
}; // Size: 0x1E45

#endif
