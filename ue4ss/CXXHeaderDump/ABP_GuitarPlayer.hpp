#ifndef UE4SS_SDK_ABP_GuitarPlayer_HPP
#define UE4SS_SDK_ABP_GuitarPlayer_HPP

class UABP_GuitarPlayer_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;                          // 0x02F8 (size: 0x80)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;                      // 0x0378 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;                          // 0x0438 (size: 0x80)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x04B8 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;                          // 0x0558 (size: 0x80)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1;                      // 0x05D8 (size: 0xC0)
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;                            // 0x0698 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;                          // 0x0738 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;                          // 0x07B8 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x0838 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x08B8 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0938 (size: 0x80)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x09B8 (size: 0xA0)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x0A58 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x0BB0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0BD8 (size: 0x80)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0C58 (size: 0xC0)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0D18 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0D40 (size: 0x80)
    class UAnimSequenceBase* CurrentChordAnim;                                        // 0x0DC0 (size: 0x8)
    class UAnimSequenceBase* PrevChordAnim;                                           // 0x0DC8 (size: 0x8)
    bool IsChangingChord;                                                             // 0x0DD0 (size: 0x1)
    bool Strum_E;                                                                     // 0x0DD1 (size: 0x1)
    bool Strum_B;                                                                     // 0x0DD2 (size: 0x1)
    bool Strum_G;                                                                     // 0x0DD3 (size: 0x1)
    bool Strum_D;                                                                     // 0x0DD4 (size: 0x1)
    bool Strum_A;                                                                     // 0x0DD5 (size: 0x1)
    bool Strum_ELow;                                                                  // 0x0DD6 (size: 0x1)
    bool Strum_All;                                                                   // 0x0DD7 (size: 0x1)
    FName CacheChordName;                                                             // 0x0DD8 (size: 0x8)
    FName CurrentChordName;                                                           // 0x0DE0 (size: 0x8)
    class AUGP_Player_C* UGP_Player;                                                  // 0x0DE8 (size: 0x8)
    int32 StrumFrameCounter;                                                          // 0x0DF0 (size: 0x4)
    int32 FC_E;                                                                       // 0x0DF4 (size: 0x4)
    int32 FC_B;                                                                       // 0x0DF8 (size: 0x4)
    int32 FC_G;                                                                       // 0x0DFC (size: 0x4)
    int32 FC_D;                                                                       // 0x0E00 (size: 0x4)
    int32 FC_A;                                                                       // 0x0E04 (size: 0x4)
    int32 FC_ELow;                                                                    // 0x0E08 (size: 0x4)
    int32 FC_All;                                                                     // 0x0E0C (size: 0x4)
    int32 ResetCount;                                                                 // 0x0E10 (size: 0x4)
    int32 ThumbStrumIndex;                                                            // 0x0E14 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void ResetStrumBoolByFC(int32& FC_String, bool& StrumBool);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GuitarPlayer_AnimGraphNode_SequencePlayer_374BAA8D4286829F419C0A8D7258EB76();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GuitarPlayer_AnimGraphNode_SequencePlayer_CCE79EA0473309A16FAE8EBFF693CEDE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GuitarPlayer_AnimGraphNode_SequencePlayer_1282386741B1A698A699279FCB38E71C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GuitarPlayer_AnimGraphNode_SequencePlayer_F510A1D744E0723F44641A815995C169();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GuitarPlayer_AnimGraphNode_SequencePlayer_887AF5774CA44F3AFD73D3944406DE8D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GuitarPlayer_AnimGraphNode_SequencePlayer_99DECF2847CAA1B3D37779BEA7843BED();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ChangeChord();
    void StrumString(FString StringName);
    void CountFrame();
    void ExecuteUbergraph_ABP_GuitarPlayer(int32 EntryPoint);
}; // Size: 0xE18

#endif
