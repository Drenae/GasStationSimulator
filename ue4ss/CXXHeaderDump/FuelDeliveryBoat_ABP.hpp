#ifndef UE4SS_SDK_FuelDeliveryBoat_ABP_HPP
#define UE4SS_SDK_FuelDeliveryBoat_ABP_HPP

class UFuelDeliveryBoat_ABP_C : public UPilotsAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x04C8 (size: 0x30)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x04F8 (size: 0xA0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0598 (size: 0xE8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0680 (size: 0x80)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x0700 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x0858 (size: 0x28)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0880 (size: 0xC0)
    FAnimNode_Slot AnimGraphNode_Slot_1;                                              // 0x0940 (size: 0x48)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0988 (size: 0x28)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x09B0 (size: 0x48)
    FRotator CachedRotation;                                                          // 0x09F8 (size: 0xC)
    bool Move;                                                                        // 0x0A04 (size: 0x1)
    FRotator DeltaRotation;                                                           // 0x0A08 (size: 0xC)
    float Direction;                                                                  // 0x0A14 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintInitializeAnimation();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_FuelDeliveryBoat_ABP(int32 EntryPoint);
}; // Size: 0xA18

#endif
