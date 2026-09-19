#ifndef UE4SS_SDK_SK_RubyShotgun_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_SK_RubyShotgun_Skeleton_AnimBlueprint_HPP

class USK_RubyShotgun_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x02F8 (size: 0x48)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x0340 (size: 0x50)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_SK_RubyShotgun_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x390

#endif
