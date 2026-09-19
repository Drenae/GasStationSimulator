#ifndef UE4SS_SDK_PilotHead_AnimBP_HPP
#define UE4SS_SDK_PilotHead_AnimBP_HPP

class UPilotHead_AnimBP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode;                              // 0x02F8 (size: 0xA0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0398 (size: 0xC0)
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;                        // 0x0458 (size: 0x1D8)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0630 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0678 (size: 0x80)
    class UPoseAsset* Pose Asset;                                                     // 0x06F8 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void OnLoaded_D502EBEE41FCB7881F241E905E7C11E7(class UObject* Loaded);
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_PilotHead_AnimBP(int32 EntryPoint);
}; // Size: 0x700

#endif
