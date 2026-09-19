#ifndef UE4SS_SDK_Joe_Head_ABP_HPP
#define UE4SS_SDK_Joe_Head_ABP_HPP

class UJoe_Head_ABP_C : public UPilotsAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x04C8 (size: 0x30)
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;                        // 0x04F8 (size: 0x1D8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x06D0 (size: 0x80)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0750 (size: 0xC0)
    FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode;                              // 0x0810 (size: 0xA0)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x08B0 (size: 0x48)
    bool bLookAt;                                                                     // 0x08F8 (size: 0x1)
    FTransform Look At Location;                                                      // 0x0900 (size: 0x30)
    bool ShouldLookAt;                                                                // 0x0930 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_Joe_Head_ABP(int32 EntryPoint);
}; // Size: 0x931

#endif
