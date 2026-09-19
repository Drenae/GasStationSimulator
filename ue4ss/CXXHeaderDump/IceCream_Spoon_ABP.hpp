#ifndef UE4SS_SDK_IceCream_Spoon_ABP_HPP
#define UE4SS_SDK_IceCream_Spoon_ABP_HPP

class UIceCream_Spoon_ABP_C : public USpoonAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x02C8 (size: 0xE8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x03B0 (size: 0x30)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_IceCream_Spoon_ABP(int32 EntryPoint);
}; // Size: 0x3E0

#endif
