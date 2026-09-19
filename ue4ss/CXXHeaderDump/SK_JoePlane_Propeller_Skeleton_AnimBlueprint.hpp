#ifndef UE4SS_SDK_SK_JoePlane_Propeller_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_SK_JoePlane_Propeller_Skeleton_AnimBlueprint_HPP

class USK_JoePlane_Propeller_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x02C8 (size: 0x48)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0310 (size: 0x30)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_SK_JoePlane_Propeller_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x340

#endif
