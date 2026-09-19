#ifndef UE4SS_SDK_SK_Shark_Megalodon_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_SK_Shark_Megalodon_Skeleton_AnimBlueprint_HPP

class USK_Shark_Megalodon_Skeleton_AnimBlueprint_C : public UPilotsAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x04C8 (size: 0x30)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace;        // 0x04F8 (size: 0x190)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0688 (size: 0x80)
    FAnimNode_Slot AnimGraphNode_Slot_2;                                              // 0x0708 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_1;                                              // 0x0750 (size: 0x48)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1;                      // 0x0798 (size: 0xC0)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x0858 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;                            // 0x09B0 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x09D8 (size: 0x28)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0A00 (size: 0xC0)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0AC0 (size: 0x48)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0B08 (size: 0x28)
    FRotator CachedRotation;                                                          // 0x0B30 (size: 0xC)
    FRotator DeltaRotation;                                                           // 0x0B3C (size: 0xC)
    float Direction;                                                                  // 0x0B48 (size: 0x4)
    float Blend Weights 0;                                                            // 0x0B4C (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_SK_Shark_Megalodon_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0xB50

#endif
