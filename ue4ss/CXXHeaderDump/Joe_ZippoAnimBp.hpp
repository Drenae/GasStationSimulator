#ifndef UE4SS_SDK_Joe_ZippoAnimBp_HPP
#define UE4SS_SDK_Joe_ZippoAnimBp_HPP

class UJoe_ZippoAnimBp_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x02F8 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_Joe_ZippoAnimBp(int32 EntryPoint);
}; // Size: 0x340

#endif
