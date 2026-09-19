#ifndef UE4SS_SDK_DesertAnim_BP_HPP
#define UE4SS_SDK_DesertAnim_BP_HPP

class UDesertAnim_BP_C : public UVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A60 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0A68 (size: 0x30)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0A98 (size: 0x20)
    FAnimNode_WheelHandler AnimGraphNode_WheelHandler;                                // 0x0AB8 (size: 0xE0)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0B98 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0BB8 (size: 0x118)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void ExecuteUbergraph_DesertAnim_BP(int32 EntryPoint);
}; // Size: 0xCD0

#endif
