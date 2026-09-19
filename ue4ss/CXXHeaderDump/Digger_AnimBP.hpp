#ifndef UE4SS_SDK_Digger_AnimBP_HPP
#define UE4SS_SDK_Digger_AnimBP_HPP

class UDigger_AnimBP_C : public UVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A60 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0A68 (size: 0x30)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0A98 (size: 0x20)
    FAnimNode_WheelHandler AnimGraphNode_WheelHandler;                                // 0x0AB8 (size: 0xE0)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0B98 (size: 0x20)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;                      // 0x0BB8 (size: 0xE8)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0CA0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0CD0 (size: 0xB0)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0D80 (size: 0x118)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1;                      // 0x0E98 (size: 0xC0)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0F58 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                      // 0x0FA0 (size: 0xE8)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x1088 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x1148 (size: 0xE8)
    float Distance;                                                                   // 0x1230 (size: 0x4)
    class UCurveFloat* NewVar_0;                                                      // 0x1238 (size: 0x8)
    float FWD;                                                                        // 0x1240 (size: 0x4)
    float Direction;                                                                  // 0x1244 (size: 0x4)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_Digger_AnimBP(int32 EntryPoint);
}; // Size: 0x1248

#endif
