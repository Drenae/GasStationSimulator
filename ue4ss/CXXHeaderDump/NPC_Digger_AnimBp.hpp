#ifndef UE4SS_SDK_NPC_Digger_AnimBp_HPP
#define UE4SS_SDK_NPC_Digger_AnimBp_HPP

class UNPC_Digger_AnimBp_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x02F8 (size: 0xE8)
    float ForwardAxis;                                                                // 0x03E0 (size: 0x4)
    float Direction;                                                                  // 0x03E4 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_NPC_Digger_AnimBp(int32 EntryPoint);
}; // Size: 0x3E8

#endif
