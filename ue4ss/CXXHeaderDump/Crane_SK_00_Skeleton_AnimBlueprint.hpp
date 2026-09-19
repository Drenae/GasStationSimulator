#ifndef UE4SS_SDK_Crane_SK_00_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_Crane_SK_00_Skeleton_AnimBlueprint_HPP

class UCrane_SK_00_Skeleton_AnimBlueprint_C : public UCraneAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0330 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0338 (size: 0x30)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5;                                  // 0x0368 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;                                  // 0x0470 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;                                  // 0x0578 (size: 0x108)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;                      // 0x0680 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;                      // 0x0740 (size: 0xE8)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;     // 0x0828 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;     // 0x0848 (size: 0x20)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                      // 0x0868 (size: 0xE8)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1;                      // 0x0950 (size: 0xC0)
    FAnimNode_CopyBone AnimGraphNode_CopyBone;                                        // 0x0A10 (size: 0xF0)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0B00 (size: 0x48)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;     // 0x0B48 (size: 0x20)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0B68 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0C28 (size: 0xE8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;     // 0x0D10 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x0D30 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0E38 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0F40 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0F60 (size: 0x108)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x1070 (size: 0x1B0)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x1220 (size: 0x20)
    float Time;                                                                       // 0x1240 (size: 0x4)
    bool bRopeTimer;                                                                  // 0x1244 (size: 0x1)
    bool RopeTimerActive;                                                             // 0x1245 (size: 0x1)
    float PistonAlpha;                                                                // 0x1248 (size: 0x4)
    float Delta Time X;                                                               // 0x124C (size: 0x4)
    bool bPistonUp;                                                                   // 0x1250 (size: 0x1)
    FRotator TargetRopeRotation;                                                      // 0x1254 (size: 0xC)
    FRotator TargetMagnetRotation;                                                    // 0x1260 (size: 0xC)
    FRotator CranePlatformRotation;                                                   // 0x126C (size: 0xC)
    FVector MagnetTransform;                                                          // 0x1278 (size: 0xC)
    FRotator GearRotation;                                                            // 0x1284 (size: 0xC)
    TArray<AActor*> ActorsToIgnore;                                                   // 0x1290 (size: 0x10)
    FRotator CurrentRopeRotation;                                                     // 0x12A0 (size: 0xC)
    FRotator CurrentMagnetRotation;                                                   // 0x12AC (size: 0xC)
    float RopeRotationSpeed;                                                          // 0x12B8 (size: 0x4)
    float MagnetRotationSpeed;                                                        // 0x12BC (size: 0x4)
    float TargetMagnetPosition;                                                       // 0x12C0 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void SmoothPhysicsRotation();
    void CopyPhysicsRotation();
    void Handle Magnet Rotation();
    void RopeSwithTimer(float DeltaT, bool& BTimerEnd);
    void Handle Rope(float DeltaT);
    void HandleMagnetZ(float MagnetSpeedRatio);
    void HandleArmPitch(float PitchRate, bool bActive);
    void HandleArmExtenstion(float ExtendRatio, bool bActive);
    void HandleYawTurning(float TurnValue, bool bActive);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintBeginPlay();
    void ExecuteUbergraph_Crane_SK_00_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x12C4

#endif
