#ifndef UE4SS_SDK_DragonIKPlugin_HPP
#define UE4SS_SDK_DragonIKPlugin_HPP

#include "DragonIKPlugin_enums.hpp"

struct FAnimNode_DragonAimSolver : public FAnimNode_DragonControlBase
{
    FBoneReference EndSplineBone;                                                     // 0x00C8 (size: 0x10)
    FBoneReference StartSplineBone;                                                   // 0x00D8 (size: 0x10)
    FTransform LookAtLocation;                                                        // 0x00F0 (size: 0x30)
    FDragonData_MultiInput dragon_input_data;                                         // 0x0120 (size: 0x20)
    TArray<FDragonData_ArmsData> Aiming_Hand_Limbs;                                   // 0x01C8 (size: 0x10)
    FDragonData_Overrided_Location_Data Arm_TargetLocation_Overrides;                 // 0x01E8 (size: 0x10)
    bool Use_Separate_Targets;                                                        // 0x01F8 (size: 0x1)
    bool Override_Hand_Rotation;                                                      // 0x01F9 (size: 0x1)
    bool enable_head_aim;                                                             // 0x01FA (size: 0x1)
    bool bAllowHandStretching;                                                        // 0x01FB (size: 0x1)
    bool reach_instead;                                                               // 0x01FC (size: 0x1)
    bool Aggregate_Hand_Body;                                                         // 0x01FD (size: 0x1)
    bool Let_Arm_Twist_With_Hand;                                                     // 0x01FE (size: 0x1)
    EPole_System_DragonIK pole_system_input;                                          // 0x01FF (size: 0x1)
    ETwist_Type_DragonIK arm_twist_axis;                                              // 0x0200 (size: 0x1)
    ERotation_Type_DragonIK hand_rotation_method;                                     // 0x0201 (size: 0x1)
    bool Override_Head_Rotation;                                                      // 0x0202 (size: 0x1)
    bool Enable_Hand_Interpolation;                                                   // 0x0203 (size: 0x1)
    float Hand_Interpolation_Speed;                                                   // 0x0204 (size: 0x4)
    FDragonData_CustomArmLengths custom_arm_lengths;                                  // 0x0208 (size: 0x10)
    EInputTransformSpace_DragonIK arm_transform_space;                                // 0x0218 (size: 0x1)
    int32 Main_Arm_Index;                                                             // 0x021C (size: 0x4)
    float Lookat_Radius;                                                              // 0x02B0 (size: 0x4)
    FRotator Inner_Body_Clamp;                                                        // 0x02B4 (size: 0xC)
    float Lookat_Clamp;                                                               // 0x02C0 (size: 0x4)
    float Limbs_Clamp;                                                                // 0x02C4 (size: 0x4)
    float Downward_Dip_Multiplier;                                                    // 0x02C8 (size: 0x4)
    float Inverted_Dip_Multiplier;                                                    // 0x02CC (size: 0x4)
    float Vertical_Dip_Treshold;                                                      // 0x02D0 (size: 0x4)
    float Side_Move_Multiplier;                                                       // 0x02D4 (size: 0x4)
    float Side_Down_Multiplier;                                                       // 0x02D8 (size: 0x4)
    float Up_Rot_Clamp;                                                               // 0x02DC (size: 0x4)
    FVector2D Verticle_Range_Angles;                                                  // 0x02E0 (size: 0x8)
    FVector2D Horizontal_Range_Angles;                                                // 0x02E8 (size: 0x8)
    FRuntimeFloatCurve Look_Bending_Curve;                                            // 0x02F0 (size: 0x88)
    FRuntimeFloatCurve Look_Multiplier_Curve;                                         // 0x0378 (size: 0x88)
    EInputTransformSpace_DragonIK look_transform_space;                               // 0x0400 (size: 0x1)
    bool Lock_Legs;                                                                   // 0x0401 (size: 0x1)
    bool ignore_elbow_modification;                                                   // 0x0402 (size: 0x1)
    bool ignore_separate_hand_solving;                                                // 0x0403 (size: 0x1)
    bool Use_Natural_Method;                                                          // 0x0404 (size: 0x1)
    bool Head_Use_Separate_Clamp;                                                     // 0x0405 (size: 0x1)
    bool Is_Head_Accurate;                                                            // 0x0406 (size: 0x1)
    bool automatic_leg_make;                                                          // 0x0407 (size: 0x1)
    bool enable_solver;                                                               // 0x0409 (size: 0x1)
    bool Work_Outside_PIE;                                                            // 0x040A (size: 0x1)
    bool Adaptive_Terrain_Tail;                                                       // 0x040B (size: 0x1)
    TEnumAsByte<ETraceTypeQuery> Trace_Channel;                                       // 0x040C (size: 0x1)
    float Trace_Up_Height;                                                            // 0x0410 (size: 0x4)
    float Trace_Down_Height;                                                          // 0x0414 (size: 0x4)
    EInterpoLocation_Type_Plugin loc_interp_type;                                     // 0x04A4 (size: 0x1)
    bool Enable_Interpolation;                                                        // 0x04AD (size: 0x1)
    float Interpolation_Speed;                                                        // 0x04B0 (size: 0x4)
    float Toggle_Interpolation_Speed;                                                 // 0x04B4 (size: 0x4)
    FVector LookAt_Axis;                                                              // 0x0510 (size: 0xC)
    FVector Upward_Axis;                                                              // 0x051C (size: 0xC)
    FVector TargetOffset;                                                             // 0x0528 (size: 0xC)
    bool Use_Reference_Forward_Axis;                                                  // 0x0534 (size: 0x1)
    FVector Reference_Constant_Forward_Axis;                                          // 0x0538 (size: 0xC)
    FTransform Debug_LookAtLocation;                                                  // 0x0620 (size: 0x30)
    TArray<FTransform> Debug_Hand_Locations;                                          // 0x0650 (size: 0x10)

}; // Size: 0x9D0

struct FAnimNode_DragonControlBase : public FAnimNode_Base
{
    FComponentSpacePoseLink ComponentPose;                                            // 0x0010 (size: 0x10)
    int32 LODThreshold;                                                               // 0x0020 (size: 0x4)
    float ActualAlpha;                                                                // 0x0024 (size: 0x4)
    EAnimAlphaInputType AlphaInputType;                                               // 0x0028 (size: 0x1)
    bool bAlphaBoolEnabled;                                                           // 0x0029 (size: 0x1)
    float alpha;                                                                      // 0x002C (size: 0x4)
    FInputScaleBias AlphaScaleBias;                                                   // 0x0030 (size: 0x8)
    FInputAlphaBoolBlend AlphaBoolBlend;                                              // 0x0038 (size: 0x48)
    FName AlphaCurveName;                                                             // 0x0080 (size: 0x8)
    FInputScaleBiasClamp AlphaScaleBiasClamp;                                         // 0x0088 (size: 0x30)

}; // Size: 0xC8

struct FAnimNode_DragonFabrikSolver : public FAnimNode_DragonControlBase
{
    FBoneReference StartSplineBone;                                                   // 0x00C8 (size: 0x10)
    FBoneReference EndSplineBone;                                                     // 0x00D8 (size: 0x10)
    float Precision;                                                                  // 0x00E8 (size: 0x4)
    float MaxIterations;                                                              // 0x00EC (size: 0x4)
    FTransform Target_Transform;                                                      // 0x00F0 (size: 0x30)

}; // Size: 0x160

struct FAnimNode_DragonFeetSolver : public FAnimNode_DragonControlBase
{
    FDragonData_MultiInput dragon_input_data;                                         // 0x00C8 (size: 0x20)
    EIK_Type_Plugin ik_type;                                                          // 0x0160 (size: 0x1)
    EIKTrace_Type_Plugin trace_type;                                                  // 0x0161 (size: 0x1)
    float Trace_Radius;                                                               // 0x0164 (size: 0x4)
    bool Override_Curve_Velocity;                                                     // 0x0168 (size: 0x1)
    float custom_velocity;                                                            // 0x016C (size: 0x4)
    EInterpoLocation_Type_Plugin loc_interp_type;                                     // 0x0170 (size: 0x1)
    EInterpoRotation_Type_Plugin rot_interp_type;                                     // 0x017C (size: 0x1)
    float virtual_scale;                                                              // 0x0180 (size: 0x4)
    bool automatic_leg_make;                                                          // 0x0184 (size: 0x1)
    bool Use_OptionalRef_Feet_As_Ref;                                                 // 0x0185 (size: 0x1)
    bool enable_solver;                                                               // 0x0186 (size: 0x1)
    bool Work_Outside_PIE;                                                            // 0x0187 (size: 0x1)
    FComponentSpacePoseLink OptionalRefPose;                                          // 0x0188 (size: 0x10)
    bool interpolate_only_z;                                                          // 0x0198 (size: 0x1)
    float shift_speed;                                                                // 0x019C (size: 0x4)
    float Location_Lerp_Speed;                                                        // 0x01A8 (size: 0x4)
    float feet_rotation_speed;                                                        // 0x01AC (size: 0x4)
    bool ignore_shift_speed;                                                          // 0x01B0 (size: 0x1)
    bool Ignore_Lerping;                                                              // 0x01B1 (size: 0x1)
    bool Ignore_Location_Lerping;                                                     // 0x01B2 (size: 0x1)
    FRuntimeFloatCurve Interpolation_Velocity_Curve;                                  // 0x01B8 (size: 0x88)
    bool Enable_Complex_Rotation_Method;                                              // 0x0240 (size: 0x1)
    FRuntimeFloatCurve ComplexSimpleFoot_Velocity_Curve;                              // 0x0248 (size: 0x88)
    TEnumAsByte<ETraceTypeQuery> Trace_Channel;                                       // 0x0310 (size: 0x1)
    TEnumAsByte<ETraceTypeQuery> Anti_Trace_Channel;                                  // 0x0311 (size: 0x1)
    float FPS_Lerp_Treshold;                                                          // 0x0314 (size: 0x4)
    float line_trace_upper_height;                                                    // 0x0484 (size: 0x4)
    float line_trace_down_height;                                                     // 0x0488 (size: 0x4)
    FRuntimeFloatCurve Trace_Down_Multiplier_Curve;                                   // 0x0490 (size: 0x88)
    bool Use_Anti_Channel;                                                            // 0x0518 (size: 0x1)
    bool Should_Rotate_Feet;                                                          // 0x0519 (size: 0x1)
    bool show_trace_in_game;                                                          // 0x051B (size: 0x1)
    bool Enable_Pitch;                                                                // 0x0538 (size: 0x1)
    bool Enable_Roll;                                                                 // 0x0539 (size: 0x1)
    FVector character_direction_vector_CS;                                            // 0x053C (size: 0xC)
    FVector character_forward_direction_vector_CS;                                    // 0x0548 (size: 0xC)
    FVector poles_forward_direction_vector_CS;                                        // 0x0554 (size: 0xC)
    bool Use_Four_Point_Feets;                                                        // 0x0560 (size: 0x1)
    bool Enable_Foot_Lift_Limit;                                                      // 0x0561 (size: 0x1)
    bool Affect_Toes_Always;                                                          // 0x0562 (size: 0x1)
    FRuntimeFloatCurve Finger_Alpha_Velocity_Curve;                                   // 0x0568 (size: 0x88)
    float Max_Limb_Radius;                                                            // 0x05F0 (size: 0x4)
    bool sticky_feet_mode;                                                            // 0x05F4 (size: 0x1)
    float sticky_feet_on_speed;                                                       // 0x05F8 (size: 0x4)
    float sticky_feet_off_speed;                                                      // 0x05FC (size: 0x4)
    float Sticky_Feet_Range;                                                          // 0x0600 (size: 0x4)
    FDragonData_StickyFeetStruct sticky_feets_data;                                   // 0x0608 (size: 0x10)
    bool sticky_floor_detection;                                                      // 0x0618 (size: 0x1)
    float floor_value;                                                                // 0x061C (size: 0x4)
    bool Auto_Sticky_Toggle;                                                          // 0x0620 (size: 0x1)
    FDragonData_StickySocketStruct sticky_sockets_data;                               // 0x0628 (size: 0x10)
    float Foot_01_Height_Offset;                                                      // 0x0770 (size: 0x4)
    float Foot_02_Height_Offset;                                                      // 0x0774 (size: 0x4)
    float Foot_03_Height_Offset;                                                      // 0x0778 (size: 0x4)
    float Foot_04_Height_Offset;                                                      // 0x077C (size: 0x4)

}; // Size: 0x780

struct FAnimNode_DragonPhysicsSolver : public FAnimNode_DragonControlBase
{
}; // Size: 0x108

struct FAnimNode_DragonSpineSolver : public FAnimNode_DragonControlBase
{
    FDragonData_MultiInput dragon_input_data;                                         // 0x00C8 (size: 0x20)
    float Precision;                                                                  // 0x0158 (size: 0x4)
    float MaximumPitch;                                                               // 0x015C (size: 0x4)
    float MinimumPitch;                                                               // 0x0160 (size: 0x4)
    float MaximumRoll;                                                                // 0x0164 (size: 0x4)
    float MinimumRoll;                                                                // 0x0168 (size: 0x4)
    int32 MaxIterations;                                                              // 0x016C (size: 0x4)
    float shift_speed;                                                                // 0x0174 (size: 0x4)
    TEnumAsByte<ETraceTypeQuery> Trace_Channel;                                       // 0x0178 (size: 0x1)
    TEnumAsByte<ETraceTypeQuery> Anti_Trace_Channel;                                  // 0x0179 (size: 0x1)
    EIKTrace_Type_Plugin trace_type;                                                  // 0x017A (size: 0x1)
    float Trace_Radius;                                                               // 0x017C (size: 0x4)
    bool Override_Curve_Velocity;                                                     // 0x0180 (size: 0x1)
    float custom_velocity;                                                            // 0x0184 (size: 0x4)
    bool Rotate_Around_Translate;                                                     // 0x0188 (size: 0x1)
    ESolverComplexityPluginEnum complexity_type;                                      // 0x0189 (size: 0x1)
    bool Ignore_Lerping;                                                              // 0x018A (size: 0x1)
    float virtual_scale;                                                              // 0x019C (size: 0x4)
    float line_trace_downward_height;                                                 // 0x01A0 (size: 0x4)
    float line_trace_upper_height;                                                    // 0x01A4 (size: 0x4)
    bool Use_Anti_Channel;                                                            // 0x01A8 (size: 0x1)
    bool stabilize_pelvis_legs;                                                       // 0x01BC (size: 0x1)
    float Pelvis_UpSlopeStabilization_Alpha;                                          // 0x01C0 (size: 0x4)
    float Pelvis_DownSlopeStabilization_Alpha;                                        // 0x01C4 (size: 0x4)
    bool stabilize_chest_legs;                                                        // 0x01C8 (size: 0x1)
    float Chest_UpSlopeStabilization_Alpha;                                           // 0x01CC (size: 0x4)
    float Chest_DownslopeStabilization_Alpha;                                         // 0x01D0 (size: 0x4)
    FBoneReference Stabilization_Head_Bone;                                           // 0x01D4 (size: 0x10)
    FBoneReference Stabilization_Tail_Bone;                                           // 0x01E4 (size: 0x10)
    bool Use_Ducking_Feature;                                                         // 0x01F4 (size: 0x1)
    TEnumAsByte<ETraceTypeQuery> Ducking_Trace_Channel;                               // 0x01F5 (size: 0x1)
    float Ducking_Limit;                                                              // 0x01F8 (size: 0x4)
    float Pelvis_Crouch_Height;                                                       // 0x01FC (size: 0x4)
    float Pelvis_Crouch_Rotation_Intensity;                                           // 0x0200 (size: 0x4)
    FVector Duck_Pelvis_Trace_Offset;                                                 // 0x0204 (size: 0xC)
    float Chest_Crouch_Height;                                                        // 0x0210 (size: 0x4)
    float Chest_Crouch_Rotation_Intensity;                                            // 0x0214 (size: 0x4)
    FVector Duck_Chest_Trace_Offset;                                                  // 0x0218 (size: 0xC)
    float Slanted_Height_Up_Offset;                                                   // 0x0364 (size: 0x4)
    float Slanted_Height_Down_Offset;                                                 // 0x036C (size: 0x4)
    float dip_multiplier;                                                             // 0x0370 (size: 0x4)
    float pelvis_adaptive_gravity;                                                    // 0x0374 (size: 0x4)
    bool reverse_fabrik;                                                              // 0x0378 (size: 0x1)
    bool Calculation_To_RefPose;                                                      // 0x0380 (size: 0x1)
    float Chest_Slanted_Height_Up_Offset;                                             // 0x0384 (size: 0x4)
    float Chest_Slanted_Height_Down_Offset;                                           // 0x0388 (size: 0x4)
    float chest_side_dip_multiplier;                                                  // 0x038C (size: 0x4)
    float chest_adaptive_gravity;                                                     // 0x0390 (size: 0x4)
    float Chest_Base_Offset;                                                          // 0x0394 (size: 0x4)
    float Pelvis_Base_Offset;                                                         // 0x0398 (size: 0x4)
    float virtual_leg_width;                                                          // 0x039C (size: 0x4)
    float Maximum_Dip_Height;                                                         // 0x03A0 (size: 0x4)
    FRuntimeFloatCurve Pelvis_Height_Multiplier_Curve;                                // 0x03A8 (size: 0x88)
    float Maximum_Dip_Height_Chest;                                                   // 0x0430 (size: 0x4)
    FRuntimeFloatCurve Chest_Height_Multiplier_Curve;                                 // 0x0438 (size: 0x88)
    float rotation_power_between;                                                     // 0x04CC (size: 0x4)
    bool Use_Automatic_Fabrik_Selection;                                              // 0x04D0 (size: 0x1)
    float Trace_Lerp_Speed;                                                           // 0x04D4 (size: 0x4)
    float Location_Lerp_Speed;                                                        // 0x04D8 (size: 0x4)
    float Rotation_Lerp_Speed;                                                        // 0x04EC (size: 0x4)
    FRuntimeFloatCurve Interpolation_Multiplier_Curve;                                // 0x04F8 (size: 0x88)
    float Chest_Influence_Alpha;                                                      // 0x0580 (size: 0x4)
    float Pelvis_ForwardRotation_Intensity;                                           // 0x0584 (size: 0x4)
    float Pelvis_UpwardForwardRotation_Intensity;                                     // 0x0588 (size: 0x4)
    float Body_Rotation_Intensity;                                                    // 0x058C (size: 0x4)
    float Pelvis_Rotation_Offset;                                                     // 0x0590 (size: 0x4)
    float Chest_ForwardRotation_Intensity;                                            // 0x0594 (size: 0x4)
    float Chest_UpwardForwardRotation_Intensity;                                      // 0x0598 (size: 0x4)
    float Chest_SidewardRotation_Intensity;                                           // 0x059C (size: 0x4)
    float Chest_Rotation_Offset;                                                      // 0x05A0 (size: 0x4)
    bool Full_Extended_Spine;                                                         // 0x05E0 (size: 0x1)
    float max_extension_ratio;                                                        // 0x05E4 (size: 0x4)
    float min_extension_ratio;                                                        // 0x05E8 (size: 0x4)
    float extension_switch_speed;                                                     // 0x05EC (size: 0x4)
    bool enable_solver;                                                               // 0x05F4 (size: 0x1)
    bool Work_Outside_PIE;                                                            // 0x05F5 (size: 0x1)
    bool Use_Fake_Chest_Rotations;                                                    // 0x05F6 (size: 0x1)
    bool Use_Fake_Pelvis_Rotations;                                                   // 0x05F7 (size: 0x1)
    bool Force_Activation;                                                            // 0x05FC (size: 0x1)
    bool accurate_feet_placement;                                                     // 0x05FD (size: 0x1)
    FRuntimeFloatCurve Accurate_Foot_Curve;                                           // 0x0600 (size: 0x88)
    bool use_crosshair_trace_also_for_fail_distance;                                  // 0x0688 (size: 0x1)
    bool Only_Root_Solve;                                                             // 0x0689 (size: 0x1)
    bool Ignore_Chest_Solve;                                                          // 0x068A (size: 0x1)
    FVector Overall_PostSolved_Offset;                                                // 0x0694 (size: 0xC)
    FVector character_direction_vector_CS;                                            // 0x06A0 (size: 0xC)
    FVector Forward_Direction_Vector;                                                 // 0x06AC (size: 0xC)
    bool flip_forward_and_right;                                                      // 0x06B8 (size: 0x1)
    ERefPosePluginEnum SolverReferencePose;                                           // 0x06C8 (size: 0x1)
    bool Spine_Feet_Connect;                                                          // 0x06C9 (size: 0x1)
    float Snake_Joint_Speed;                                                          // 0x09D4 (size: 0x4)
    bool Enable_Snake_Interpolation;                                                  // 0x09D8 (size: 0x1)
    bool is_snake;                                                                    // 0x09D9 (size: 0x1)
    bool Ignore_End_Points;                                                           // 0x09DA (size: 0x1)
    float Maximum_Feet_Distance;                                                      // 0x09DC (size: 0x4)
    float Minimum_Feet_Distance;                                                      // 0x09E0 (size: 0x4)
    bool DisplayLineTrace;                                                            // 0x09E4 (size: 0x1)

}; // Size: 0xAA0

struct FAnimNode_DragonWarpSolver : public FAnimNode_DragonControlBase
{
    TArray<FDragonData_WarpLimbsData> dragon_limb_input;                              // 0x00C8 (size: 0x10)
    FName Hip_Bone_Name;                                                              // 0x00D8 (size: 0x8)
    bool enable_solver;                                                               // 0x0124 (size: 0x1)
    FVector character_direction_vector_CS;                                            // 0x0244 (size: 0xC)
    FVector forward_vector_CS;                                                        // 0x0250 (size: 0xC)
    float speed_warping_const;                                                        // 0x025C (size: 0x4)
    bool enable_slope_warp;                                                           // 0x0260 (size: 0x1)
    float automatic_speed_warping_const;                                              // 0x0264 (size: 0x4)
    float slope_detection_tolerance;                                                  // 0x0268 (size: 0x4)
    float Warp_Slope_Interpolation;                                                   // 0x026C (size: 0x4)
    TEnumAsByte<ETraceTypeQuery> Trace_Channel;                                       // 0x02A0 (size: 0x1)
    float line_trace_downward_height;                                                 // 0x02A4 (size: 0x4)
    float line_trace_upper_height;                                                    // 0x02A8 (size: 0x4)
    float virtual_leg_width;                                                          // 0x02AC (size: 0x4)
    float virtual_scale;                                                              // 0x02B0 (size: 0x4)
    bool DisplayLineTrace;                                                            // 0x02B8 (size: 0x1)
    float Limb_Compression_Intensity;                                                 // 0x02BC (size: 0x4)
    FRuntimeFloatCurve Limb_Lifting_Curve;                                            // 0x02C0 (size: 0x88)
    float Hip_Change_Intensity;                                                       // 0x0348 (size: 0x4)
    FRuntimeFloatCurve Hip_Lifting_Curve;                                             // 0x0350 (size: 0x88)

}; // Size: 0x550

struct FBoneDragonSocketTarget
{
    bool bUseSocket;                                                                  // 0x0000 (size: 0x1)
    FBoneReference BoneReference;                                                     // 0x0004 (size: 0x10)
    FSocketDragonReference SocketReference;                                           // 0x0020 (size: 0x40)

}; // Size: 0x60

struct FCCDIK_Modified_ChainLink
{
}; // Size: 0x70

struct FDragonData_ArmSizeStruct
{
    bool Use_Custom_Arm_Sizes;                                                        // 0x0000 (size: 0x1)
    float custom_upperArm_length;                                                     // 0x0004 (size: 0x4)
    float custom_lowerArm_length;                                                     // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FDragonData_ArmsData
{
    FBoneReference Clavicle_Bone;                                                     // 0x0000 (size: 0x10)
    FBoneReference Shoulder_Bone_Name;                                                // 0x0010 (size: 0x10)
    FBoneReference Elbow_Bone_Name;                                                   // 0x0020 (size: 0x10)
    FBoneReference Hand_Bone_Name;                                                    // 0x0030 (size: 0x10)
    bool is_this_right_hand;                                                          // 0x0040 (size: 0x1)
    bool invert_lower_twist;                                                          // 0x0041 (size: 0x1)
    bool invert_upper_twist;                                                          // 0x0042 (size: 0x1)
    FVector Local_Direction_Axis;                                                     // 0x0044 (size: 0xC)
    FVector Arm_Aiming_Offset;                                                        // 0x0050 (size: 0xC)
    bool accurate_hand_rotation;                                                      // 0x005C (size: 0x1)
    bool relative_axis;                                                               // 0x005D (size: 0x1)
    float Maximum_Extension;                                                          // 0x0060 (size: 0x4)
    float Minimum_Extension;                                                          // 0x0064 (size: 0x4)
    float Max_Stretch_Ratio;                                                          // 0x0068 (size: 0x4)
    float Stretch_lower_arm_Priorty;                                                  // 0x006C (size: 0x4)
    FVector Elbow_Pole_Offset;                                                        // 0x0070 (size: 0xC)
    FVector North_Pole_Offset;                                                        // 0x007C (size: 0xC)
    FVector South_Pole_Offset;                                                        // 0x0088 (size: 0xC)
    FVector West_Pole_Offset;                                                         // 0x0094 (size: 0xC)
    FVector East_Pole_Offset;                                                         // 0x00A0 (size: 0xC)
    bool override_limits;                                                             // 0x00AC (size: 0x1)
    FVector2D Max_Arm_H_Angle;                                                        // 0x00B0 (size: 0x8)
    FVector2D Max_Arm_V_Angle;                                                        // 0x00B8 (size: 0x8)
    FVector2D Inner_Clavicle_Side_Limit;                                              // 0x00C0 (size: 0x8)
    FVector2D Inner_Clavicle_Vertical_Limit;                                          // 0x00C8 (size: 0x8)
    FVector2D Outer_Clavicle_Side_Limit;                                              // 0x00D0 (size: 0x8)
    FVector2D Outer_Clavicle_Vertical_Limit;                                          // 0x00D8 (size: 0x8)
    FVector2D Shoulder_Inner_Clamp;                                                   // 0x00E0 (size: 0x8)
    FVector2D Shoulder_Outer_Clamp;                                                   // 0x00E8 (size: 0x8)
    FVector2D ForeArm_Angle_Limit;                                                    // 0x00F0 (size: 0x8)
    float Twist_Offset_Reverse;                                                       // 0x00F8 (size: 0x4)

}; // Size: 0x11C

struct FDragonData_CustomArmLengths
{
    TArray<FDragonData_ArmSizeStruct> CustomArmSizeArray;                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FDragonData_FingerData
{
    FName Finger_Bone_Name;                                                           // 0x0000 (size: 0x8)
    float Trace_Scale;                                                                // 0x0008 (size: 0x4)
    FVector Trace_Offset;                                                             // 0x000C (size: 0xC)
    bool Is_Finger_Backward;                                                          // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FDragonData_FootData
{
    FName Feet_Bone_Name;                                                             // 0x0000 (size: 0x8)
    FName Knee_Bone_Name;                                                             // 0x0008 (size: 0x8)
    FName Thigh_Bone_Name;                                                            // 0x0010 (size: 0x8)
    FRotator Feet_Rotation_Offset;                                                    // 0x0018 (size: 0xC)
    bool Fixed_Pole;                                                                  // 0x0024 (size: 0x1)
    FVector Knee_Direction_Offset;                                                    // 0x0028 (size: 0xC)
    FVector Feet_Trace_Offset;                                                        // 0x0034 (size: 0xC)
    float Front_Trace_Point_Spacing;                                                  // 0x0040 (size: 0x4)
    float Side_Traces_Spacing;                                                        // 0x0044 (size: 0x4)
    float Feet_Rotation_Limit;                                                        // 0x0048 (size: 0x4)
    bool Fixed_Foot_Height;                                                           // 0x004C (size: 0x1)
    float Feet_Heights;                                                               // 0x0050 (size: 0x4)
    float Feet_Alpha;                                                                 // 0x0054 (size: 0x4)
    float Min_Feet_Extension;                                                         // 0x0058 (size: 0x4)
    float Max_Feet_Extension;                                                         // 0x005C (size: 0x4)
    float Feet_Slope_Offset_Multiplier;                                               // 0x0060 (size: 0x4)
    float Max_Feet_Lift;                                                              // 0x0064 (size: 0x4)
    float Overrided_Trace_Radius;                                                     // 0x0068 (size: 0x4)
    TArray<FDragonData_FingerData> Finger_Array;                                      // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FDragonData_MultiInput
{
    FName Start_Spine;                                                                // 0x0000 (size: 0x8)
    FName Pelvis;                                                                     // 0x0008 (size: 0x8)
    TArray<FDragonData_FootData> FeetBones;                                           // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FDragonData_Overrided_Location_Data
{
    TArray<FDragonData_SingleArmElement> Arm_TargetLocation_Overrides;                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FDragonData_PhysicsBoneStrip
{
    FBoneReference Bone_Chain_Start;                                                  // 0x0000 (size: 0x10)
    FBoneReference Bone_Chain_End;                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FDragonData_PhysicsHandleMultiplier
{
    FName bone_name;                                                                  // 0x0000 (size: 0x8)
    float bone_strength;                                                              // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FDragonData_SingleArmElement
{
    FTransform Overrided_Arm_Transform;                                               // 0x0000 (size: 0x30)
    float Arm_Alpha;                                                                  // 0x0030 (size: 0x4)
    FRotator rotation_offset;                                                         // 0x0034 (size: 0xC)

}; // Size: 0x40

struct FDragonData_StickyFeetStruct
{
    TArray<bool> sticky_feet_array;                                                   // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FDragonData_StickySocketStruct
{
    TArray<FBoneSocketTarget> sticky_socket_array;                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FDragonData_WarpLimbsData
{
    FName Foot_Bone_Name;                                                             // 0x0000 (size: 0x8)
    FName Knee_Bone_Name;                                                             // 0x0008 (size: 0x8)
    FName Thigh_Bone_Name;                                                            // 0x0010 (size: 0x8)
    float Warp_Lift_Reference_Location;                                               // 0x0018 (size: 0x4)
    float Warp_Param_Adder;                                                           // 0x001C (size: 0x4)
    FVector2D Min_Max_Warp;                                                           // 0x0020 (size: 0x8)
    float max_extra_compression_height;                                               // 0x0028 (size: 0x4)

}; // Size: 0x2C

struct FSocketDragonReference
{
    FName SocketName;                                                                 // 0x0030 (size: 0x8)

}; // Size: 0x40

class ADragonIKPhysicsHolder : public AActor
{
    class AActor* connected_actor;                                                    // 0x0230 (size: 0x8)

}; // Size: 0x238

class UDragonIKPhysicsComponent : public UActorComponent
{
    TArray<FName> individual_bone_selection;                                          // 0x00D0 (size: 0x10)
    TArray<FName> Influence_Stopping_Bones;                                           // 0x00E8 (size: 0x10)
    TArray<FDragonData_PhysicsHandleMultiplier> Override_Handle_Strength_Multiplier;  // 0x00F8 (size: 0x10)
    int32 Linear_Strength;                                                            // 0x0138 (size: 0x4)
    int32 Angular_Strength;                                                           // 0x013C (size: 0x4)
    int32 Linear_Damp;                                                                // 0x0140 (size: 0x4)
    int32 Angular_Damp;                                                               // 0x0144 (size: 0x4)
    bool use_auto_blending_logic;                                                     // 0x0148 (size: 0x1)
    bool modify_physics_states;                                                       // 0x0149 (size: 0x1)
    int32 Hit_Enable_Speed;                                                           // 0x014C (size: 0x4)
    int32 Hit_Disable_Speed;                                                          // 0x0150 (size: 0x4)
    float hit_delay_time;                                                             // 0x0154 (size: 0x4)

    void ReleaseAllHandles();
    void ReGrabAllHandles();
    void OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ModifyAllHandleTransforms();
    void FirstTimeInitialization(class USkeletalMeshComponent* skeleton_input);
    void CacheSimulationStates();
}; // Size: 0x1E0

class UDragonIK_Library : public UObject
{

    FTransform QuatLookXatLocation(const FTransform& LookAtFromTransform, const FVector& LookAtTarget);
    FRotator LookAtVector_V2(FVector Source_Location, FVector lookAt, FVector upDirection);
    FRotator LookAtRotation_V3(FVector Source, FVector Target, FVector UpVector);
    FRotator CustomLookRotation(FVector lookAt, FVector upDirection);
}; // Size: 0x30

#endif
