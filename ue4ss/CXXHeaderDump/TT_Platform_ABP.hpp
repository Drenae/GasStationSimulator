#ifndef UE4SS_SDK_TT_Platform_ABP_HPP
#define UE4SS_SDK_TT_Platform_ABP_HPP

class UTT_Platform_ABP_C : public UTowyAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0AB0 (size: 0x8)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;                      // 0x0AB8 (size: 0xE8)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;                      // 0x0BA0 (size: 0xC0)
    FAnimNode_WheelHandler AnimGraphNode_WheelHandler;                                // 0x0C60 (size: 0xE0)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0D40 (size: 0x118)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;     // 0x0E58 (size: 0x20)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1;                      // 0x0E78 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                      // 0x0F38 (size: 0xE8)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x1020 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x10E0 (size: 0xE8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x11C8 (size: 0x30)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;     // 0x11F8 (size: 0x20)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x1218 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x1260 (size: 0xA0)
    FAnimNode_RigidBody AnimGraphNode_RigidBody;                                      // 0x1300 (size: 0x830)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x1B30 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x1B50 (size: 0x20)
    float alpha;                                                                      // 0x1B70 (size: 0x4)
    bool NewVar_0;                                                                    // 0x1B74 (size: 0x1)
    bool Montage;                                                                     // 0x1B75 (size: 0x1)
    float MagnetModeAlpha;                                                            // 0x1B78 (size: 0x4)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void HandleMontageAlpha();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_TT_Platform_ABP(int32 EntryPoint);
}; // Size: 0x1B7C

#endif
