#ifndef UE4SS_SDK_Sean_Head_ABP_HPP
#define UE4SS_SDK_Sean_Head_ABP_HPP

class USean_Head_ABP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;                        // 0x02F8 (size: 0x1D8)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x04D0 (size: 0xC0)
    FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode;                              // 0x0590 (size: 0xA0)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0630 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_Sean_Head_ABP(int32 EntryPoint);
}; // Size: 0x678

#endif
