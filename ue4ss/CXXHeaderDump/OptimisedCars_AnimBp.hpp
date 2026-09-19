#ifndef UE4SS_SDK_OptimisedCars_AnimBp_HPP
#define UE4SS_SDK_OptimisedCars_AnimBp_HPP

class UOptimisedCars_AnimBp_C : public UVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A60 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0A68 (size: 0x30)
    FAnimNode_CopyBone AnimGraphNode_CopyBone_3;                                      // 0x0A98 (size: 0xF0)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;     // 0x0B88 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;     // 0x0BA8 (size: 0x20)
    FAnimNode_CopyBone AnimGraphNode_CopyBone_2;                                      // 0x0BC8 (size: 0xF0)
    FAnimNode_CopyBone AnimGraphNode_CopyBone_1;                                      // 0x0CB8 (size: 0xF0)
    FAnimNode_CopyBone AnimGraphNode_CopyBone;                                        // 0x0DA8 (size: 0xF0)
    FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose;                             // 0x0E98 (size: 0x10)
    FAnimNode_WheelHandler AnimGraphNode_WheelHandler;                                // 0x0EA8 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1;                      // 0x0F88 (size: 0xC0)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;     // 0x1048 (size: 0x20)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x1068 (size: 0x158)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x11C0 (size: 0x20)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;                            // 0x11E0 (size: 0x28)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x1208 (size: 0x20)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x1228 (size: 0x28)
    FAnimNode_Slot AnimGraphNode_Slot_1;                                              // 0x1250 (size: 0x48)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x1298 (size: 0xC0)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x1358 (size: 0x28)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x1380 (size: 0x48)
    float WheelhandlerAlpha;                                                          // 0x13C8 (size: 0x4)
    class AGSSWheeledVehicle* GSSVehicle;                                             // 0x13D0 (size: 0x8)
    bool IsNewVehicleMovementEnabled;                                                 // 0x13D8 (size: 0x1)
    float WheelRotationChange;                                                        // 0x13DC (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_OptimisedCars_AnimBp_AnimGraphNode_CopyBone_50AA67104F507D1638EE2CA353610ECE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_OptimisedCars_AnimBp_AnimGraphNode_CopyBone_62D7CA3840C2833CF5C489AF680FFED7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_OptimisedCars_AnimBp_AnimGraphNode_CopyBone_3410F537451F6355002292B03588816E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_OptimisedCars_AnimBp_AnimGraphNode_CopyBone_0D02FAFB45310C1F760563BBE2CFEC34();
    void ExecuteUbergraph_OptimisedCars_AnimBp(int32 EntryPoint);
}; // Size: 0x13E0

#endif
