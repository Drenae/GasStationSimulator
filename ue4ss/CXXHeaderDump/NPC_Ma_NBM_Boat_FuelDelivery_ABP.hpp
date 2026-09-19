#ifndef UE4SS_SDK_NPC_Ma_NBM_Boat_FuelDelivery_ABP_HPP
#define UE4SS_SDK_NPC_Ma_NBM_Boat_FuelDelivery_ABP_HPP

class UNPC_Ma_NBM_Boat_FuelDelivery_ABP_C : public UPilotsAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x04C8 (size: 0x30)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x04F8 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0540 (size: 0xA0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x05E0 (size: 0xE8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x06C8 (size: 0x80)
    FRotator DeltaRotation;                                                           // 0x0748 (size: 0xC)
    FRotator CachedRotation;                                                          // 0x0754 (size: 0xC)
    float Direction;                                                                  // 0x0760 (size: 0x4)
    bool Move;                                                                        // 0x0764 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintInitializeAnimation();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_NPC_Ma_NBM_Boat_FuelDelivery_ABP(int32 EntryPoint);
}; // Size: 0x765

#endif
