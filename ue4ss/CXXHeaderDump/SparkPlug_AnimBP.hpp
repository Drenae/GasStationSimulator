#ifndef UE4SS_SDK_SparkPlug_AnimBP_HPP
#define UE4SS_SDK_SparkPlug_AnimBP_HPP

class USparkPlug_AnimBP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x02F8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0328 (size: 0xB0)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x03D8 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_SparkPlug_AnimBP(int32 EntryPoint);
}; // Size: 0x420

#endif
