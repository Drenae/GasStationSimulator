#ifndef UE4SS_SDK_ABP_Ruby_Head_HPP
#define UE4SS_SDK_ABP_Ruby_Head_HPP

class UABP_Ruby_Head_C : public UHumanAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0510 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0518 (size: 0x30)
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;                        // 0x0548 (size: 0x1D8)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0720 (size: 0xC0)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x07E0 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0828 (size: 0x80)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x08A8 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0948 (size: 0x80)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_Ruby_Head(int32 EntryPoint);
}; // Size: 0x9C8

#endif
