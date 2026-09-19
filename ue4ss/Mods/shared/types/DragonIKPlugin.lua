---@meta

---@class ADragonIKPhysicsHolder : AActor
---@field connected_actor AActor
local ADragonIKPhysicsHolder = {}



---@class FAnimNode_DragonAimSolver : FAnimNode_DragonControlBase
---@field EndSplineBone FBoneReference
---@field StartSplineBone FBoneReference
---@field LookAtLocation FTransform
---@field dragon_input_data FDragonData_MultiInput
---@field Aiming_Hand_Limbs TArray<FDragonData_ArmsData>
---@field Arm_TargetLocation_Overrides FDragonData_Overrided_Location_Data
---@field Use_Separate_Targets boolean
---@field Override_Hand_Rotation boolean
---@field enable_head_aim boolean
---@field bAllowHandStretching boolean
---@field reach_instead boolean
---@field Aggregate_Hand_Body boolean
---@field Let_Arm_Twist_With_Hand boolean
---@field pole_system_input EPole_System_DragonIK
---@field arm_twist_axis ETwist_Type_DragonIK
---@field hand_rotation_method ERotation_Type_DragonIK
---@field Override_Head_Rotation boolean
---@field Enable_Hand_Interpolation boolean
---@field Hand_Interpolation_Speed float
---@field custom_arm_lengths FDragonData_CustomArmLengths
---@field arm_transform_space EInputTransformSpace_DragonIK
---@field Main_Arm_Index int32
---@field Lookat_Radius float
---@field Inner_Body_Clamp FRotator
---@field Lookat_Clamp float
---@field Limbs_Clamp float
---@field Downward_Dip_Multiplier float
---@field Inverted_Dip_Multiplier float
---@field Vertical_Dip_Treshold float
---@field Side_Move_Multiplier float
---@field Side_Down_Multiplier float
---@field Up_Rot_Clamp float
---@field Verticle_Range_Angles FVector2D
---@field Horizontal_Range_Angles FVector2D
---@field Look_Bending_Curve FRuntimeFloatCurve
---@field Look_Multiplier_Curve FRuntimeFloatCurve
---@field look_transform_space EInputTransformSpace_DragonIK
---@field Lock_Legs boolean
---@field ignore_elbow_modification boolean
---@field ignore_separate_hand_solving boolean
---@field Use_Natural_Method boolean
---@field Head_Use_Separate_Clamp boolean
---@field Is_Head_Accurate boolean
---@field automatic_leg_make boolean
---@field enable_solver boolean
---@field Work_Outside_PIE boolean
---@field Adaptive_Terrain_Tail boolean
---@field Trace_Channel ETraceTypeQuery
---@field Trace_Up_Height float
---@field Trace_Down_Height float
---@field loc_interp_type EInterpoLocation_Type_Plugin
---@field Enable_Interpolation boolean
---@field Interpolation_Speed float
---@field Toggle_Interpolation_Speed float
---@field LookAt_Axis FVector
---@field Upward_Axis FVector
---@field TargetOffset FVector
---@field Use_Reference_Forward_Axis boolean
---@field Reference_Constant_Forward_Axis FVector
---@field Debug_LookAtLocation FTransform
---@field Debug_Hand_Locations TArray<FTransform>
local FAnimNode_DragonAimSolver = {}



---@class FAnimNode_DragonControlBase : FAnimNode_Base
---@field ComponentPose FComponentSpacePoseLink
---@field LODThreshold int32
---@field ActualAlpha float
---@field AlphaInputType EAnimAlphaInputType
---@field bAlphaBoolEnabled boolean
---@field alpha float
---@field AlphaScaleBias FInputScaleBias
---@field AlphaBoolBlend FInputAlphaBoolBlend
---@field AlphaCurveName FName
---@field AlphaScaleBiasClamp FInputScaleBiasClamp
local FAnimNode_DragonControlBase = {}



---@class FAnimNode_DragonFabrikSolver : FAnimNode_DragonControlBase
---@field StartSplineBone FBoneReference
---@field EndSplineBone FBoneReference
---@field Precision float
---@field MaxIterations float
---@field Target_Transform FTransform
local FAnimNode_DragonFabrikSolver = {}



---@class FAnimNode_DragonFeetSolver : FAnimNode_DragonControlBase
---@field dragon_input_data FDragonData_MultiInput
---@field ik_type EIK_Type_Plugin
---@field trace_type EIKTrace_Type_Plugin
---@field Trace_Radius float
---@field Override_Curve_Velocity boolean
---@field custom_velocity float
---@field loc_interp_type EInterpoLocation_Type_Plugin
---@field rot_interp_type EInterpoRotation_Type_Plugin
---@field virtual_scale float
---@field automatic_leg_make boolean
---@field Use_OptionalRef_Feet_As_Ref boolean
---@field enable_solver boolean
---@field Work_Outside_PIE boolean
---@field OptionalRefPose FComponentSpacePoseLink
---@field interpolate_only_z boolean
---@field shift_speed float
---@field Location_Lerp_Speed float
---@field feet_rotation_speed float
---@field ignore_shift_speed boolean
---@field Ignore_Lerping boolean
---@field Ignore_Location_Lerping boolean
---@field Interpolation_Velocity_Curve FRuntimeFloatCurve
---@field Enable_Complex_Rotation_Method boolean
---@field ComplexSimpleFoot_Velocity_Curve FRuntimeFloatCurve
---@field Trace_Channel ETraceTypeQuery
---@field Anti_Trace_Channel ETraceTypeQuery
---@field FPS_Lerp_Treshold float
---@field line_trace_upper_height float
---@field line_trace_down_height float
---@field Trace_Down_Multiplier_Curve FRuntimeFloatCurve
---@field Use_Anti_Channel boolean
---@field Should_Rotate_Feet boolean
---@field show_trace_in_game boolean
---@field Enable_Pitch boolean
---@field Enable_Roll boolean
---@field character_direction_vector_CS FVector
---@field character_forward_direction_vector_CS FVector
---@field poles_forward_direction_vector_CS FVector
---@field Use_Four_Point_Feets boolean
---@field Enable_Foot_Lift_Limit boolean
---@field Affect_Toes_Always boolean
---@field Finger_Alpha_Velocity_Curve FRuntimeFloatCurve
---@field Max_Limb_Radius float
---@field sticky_feet_mode boolean
---@field sticky_feet_on_speed float
---@field sticky_feet_off_speed float
---@field Sticky_Feet_Range float
---@field sticky_feets_data FDragonData_StickyFeetStruct
---@field sticky_floor_detection boolean
---@field floor_value float
---@field Auto_Sticky_Toggle boolean
---@field sticky_sockets_data FDragonData_StickySocketStruct
---@field Foot_01_Height_Offset float
---@field Foot_02_Height_Offset float
---@field Foot_03_Height_Offset float
---@field Foot_04_Height_Offset float
local FAnimNode_DragonFeetSolver = {}



---@class FAnimNode_DragonPhysicsSolver : FAnimNode_DragonControlBase
local FAnimNode_DragonPhysicsSolver = {}


---@class FAnimNode_DragonSpineSolver : FAnimNode_DragonControlBase
---@field dragon_input_data FDragonData_MultiInput
---@field Precision float
---@field MaximumPitch float
---@field MinimumPitch float
---@field MaximumRoll float
---@field MinimumRoll float
---@field MaxIterations int32
---@field shift_speed float
---@field Trace_Channel ETraceTypeQuery
---@field Anti_Trace_Channel ETraceTypeQuery
---@field trace_type EIKTrace_Type_Plugin
---@field Trace_Radius float
---@field Override_Curve_Velocity boolean
---@field custom_velocity float
---@field Rotate_Around_Translate boolean
---@field complexity_type ESolverComplexityPluginEnum
---@field Ignore_Lerping boolean
---@field virtual_scale float
---@field line_trace_downward_height float
---@field line_trace_upper_height float
---@field Use_Anti_Channel boolean
---@field stabilize_pelvis_legs boolean
---@field Pelvis_UpSlopeStabilization_Alpha float
---@field Pelvis_DownSlopeStabilization_Alpha float
---@field stabilize_chest_legs boolean
---@field Chest_UpSlopeStabilization_Alpha float
---@field Chest_DownslopeStabilization_Alpha float
---@field Stabilization_Head_Bone FBoneReference
---@field Stabilization_Tail_Bone FBoneReference
---@field Use_Ducking_Feature boolean
---@field Ducking_Trace_Channel ETraceTypeQuery
---@field Ducking_Limit float
---@field Pelvis_Crouch_Height float
---@field Pelvis_Crouch_Rotation_Intensity float
---@field Duck_Pelvis_Trace_Offset FVector
---@field Chest_Crouch_Height float
---@field Chest_Crouch_Rotation_Intensity float
---@field Duck_Chest_Trace_Offset FVector
---@field Slanted_Height_Up_Offset float
---@field Slanted_Height_Down_Offset float
---@field dip_multiplier float
---@field pelvis_adaptive_gravity float
---@field reverse_fabrik boolean
---@field Calculation_To_RefPose boolean
---@field Chest_Slanted_Height_Up_Offset float
---@field Chest_Slanted_Height_Down_Offset float
---@field chest_side_dip_multiplier float
---@field chest_adaptive_gravity float
---@field Chest_Base_Offset float
---@field Pelvis_Base_Offset float
---@field virtual_leg_width float
---@field Maximum_Dip_Height float
---@field Pelvis_Height_Multiplier_Curve FRuntimeFloatCurve
---@field Maximum_Dip_Height_Chest float
---@field Chest_Height_Multiplier_Curve FRuntimeFloatCurve
---@field rotation_power_between float
---@field Use_Automatic_Fabrik_Selection boolean
---@field Trace_Lerp_Speed float
---@field Location_Lerp_Speed float
---@field Rotation_Lerp_Speed float
---@field Interpolation_Multiplier_Curve FRuntimeFloatCurve
---@field Chest_Influence_Alpha float
---@field Pelvis_ForwardRotation_Intensity float
---@field Pelvis_UpwardForwardRotation_Intensity float
---@field Body_Rotation_Intensity float
---@field Pelvis_Rotation_Offset float
---@field Chest_ForwardRotation_Intensity float
---@field Chest_UpwardForwardRotation_Intensity float
---@field Chest_SidewardRotation_Intensity float
---@field Chest_Rotation_Offset float
---@field Full_Extended_Spine boolean
---@field max_extension_ratio float
---@field min_extension_ratio float
---@field extension_switch_speed float
---@field enable_solver boolean
---@field Work_Outside_PIE boolean
---@field Use_Fake_Chest_Rotations boolean
---@field Use_Fake_Pelvis_Rotations boolean
---@field Force_Activation boolean
---@field accurate_feet_placement boolean
---@field Accurate_Foot_Curve FRuntimeFloatCurve
---@field use_crosshair_trace_also_for_fail_distance boolean
---@field Only_Root_Solve boolean
---@field Ignore_Chest_Solve boolean
---@field Overall_PostSolved_Offset FVector
---@field character_direction_vector_CS FVector
---@field Forward_Direction_Vector FVector
---@field flip_forward_and_right boolean
---@field SolverReferencePose ERefPosePluginEnum
---@field Spine_Feet_Connect boolean
---@field Snake_Joint_Speed float
---@field Enable_Snake_Interpolation boolean
---@field is_snake boolean
---@field Ignore_End_Points boolean
---@field Maximum_Feet_Distance float
---@field Minimum_Feet_Distance float
---@field DisplayLineTrace boolean
local FAnimNode_DragonSpineSolver = {}



---@class FAnimNode_DragonWarpSolver : FAnimNode_DragonControlBase
---@field dragon_limb_input TArray<FDragonData_WarpLimbsData>
---@field Hip_Bone_Name FName
---@field enable_solver boolean
---@field character_direction_vector_CS FVector
---@field forward_vector_CS FVector
---@field speed_warping_const float
---@field enable_slope_warp boolean
---@field automatic_speed_warping_const float
---@field slope_detection_tolerance float
---@field Warp_Slope_Interpolation float
---@field Trace_Channel ETraceTypeQuery
---@field line_trace_downward_height float
---@field line_trace_upper_height float
---@field virtual_leg_width float
---@field virtual_scale float
---@field DisplayLineTrace boolean
---@field Limb_Compression_Intensity float
---@field Limb_Lifting_Curve FRuntimeFloatCurve
---@field Hip_Change_Intensity float
---@field Hip_Lifting_Curve FRuntimeFloatCurve
local FAnimNode_DragonWarpSolver = {}



---@class FBoneDragonSocketTarget
---@field bUseSocket boolean
---@field BoneReference FBoneReference
---@field SocketReference FSocketDragonReference
local FBoneDragonSocketTarget = {}



---@class FCCDIK_Modified_ChainLink
local FCCDIK_Modified_ChainLink = {}


---@class FDragonData_ArmSizeStruct
---@field Use_Custom_Arm_Sizes boolean
---@field custom_upperArm_length float
---@field custom_lowerArm_length float
local FDragonData_ArmSizeStruct = {}



---@class FDragonData_ArmsData
---@field Clavicle_Bone FBoneReference
---@field Shoulder_Bone_Name FBoneReference
---@field Elbow_Bone_Name FBoneReference
---@field Hand_Bone_Name FBoneReference
---@field is_this_right_hand boolean
---@field invert_lower_twist boolean
---@field invert_upper_twist boolean
---@field Local_Direction_Axis FVector
---@field Arm_Aiming_Offset FVector
---@field accurate_hand_rotation boolean
---@field relative_axis boolean
---@field Maximum_Extension float
---@field Minimum_Extension float
---@field Max_Stretch_Ratio float
---@field Stretch_lower_arm_Priorty float
---@field Elbow_Pole_Offset FVector
---@field North_Pole_Offset FVector
---@field South_Pole_Offset FVector
---@field West_Pole_Offset FVector
---@field East_Pole_Offset FVector
---@field override_limits boolean
---@field Max_Arm_H_Angle FVector2D
---@field Max_Arm_V_Angle FVector2D
---@field Inner_Clavicle_Side_Limit FVector2D
---@field Inner_Clavicle_Vertical_Limit FVector2D
---@field Outer_Clavicle_Side_Limit FVector2D
---@field Outer_Clavicle_Vertical_Limit FVector2D
---@field Shoulder_Inner_Clamp FVector2D
---@field Shoulder_Outer_Clamp FVector2D
---@field ForeArm_Angle_Limit FVector2D
---@field Twist_Offset_Reverse float
local FDragonData_ArmsData = {}



---@class FDragonData_CustomArmLengths
---@field CustomArmSizeArray TArray<FDragonData_ArmSizeStruct>
local FDragonData_CustomArmLengths = {}



---@class FDragonData_FingerData
---@field Finger_Bone_Name FName
---@field Trace_Scale float
---@field Trace_Offset FVector
---@field Is_Finger_Backward boolean
local FDragonData_FingerData = {}



---@class FDragonData_FootData
---@field Feet_Bone_Name FName
---@field Knee_Bone_Name FName
---@field Thigh_Bone_Name FName
---@field Feet_Rotation_Offset FRotator
---@field Fixed_Pole boolean
---@field Knee_Direction_Offset FVector
---@field Feet_Trace_Offset FVector
---@field Front_Trace_Point_Spacing float
---@field Side_Traces_Spacing float
---@field Feet_Rotation_Limit float
---@field Fixed_Foot_Height boolean
---@field Feet_Heights float
---@field Feet_Alpha float
---@field Min_Feet_Extension float
---@field Max_Feet_Extension float
---@field Feet_Slope_Offset_Multiplier float
---@field Max_Feet_Lift float
---@field Overrided_Trace_Radius float
---@field Finger_Array TArray<FDragonData_FingerData>
local FDragonData_FootData = {}



---@class FDragonData_MultiInput
---@field Start_Spine FName
---@field Pelvis FName
---@field FeetBones TArray<FDragonData_FootData>
local FDragonData_MultiInput = {}



---@class FDragonData_Overrided_Location_Data
---@field Arm_TargetLocation_Overrides TArray<FDragonData_SingleArmElement>
local FDragonData_Overrided_Location_Data = {}



---@class FDragonData_PhysicsBoneStrip
---@field Bone_Chain_Start FBoneReference
---@field Bone_Chain_End FBoneReference
local FDragonData_PhysicsBoneStrip = {}



---@class FDragonData_PhysicsHandleMultiplier
---@field bone_name FName
---@field bone_strength float
local FDragonData_PhysicsHandleMultiplier = {}



---@class FDragonData_SingleArmElement
---@field Overrided_Arm_Transform FTransform
---@field Arm_Alpha float
---@field rotation_offset FRotator
local FDragonData_SingleArmElement = {}



---@class FDragonData_StickyFeetStruct
---@field sticky_feet_array TArray<boolean>
local FDragonData_StickyFeetStruct = {}



---@class FDragonData_StickySocketStruct
---@field sticky_socket_array TArray<FBoneSocketTarget>
local FDragonData_StickySocketStruct = {}



---@class FDragonData_WarpLimbsData
---@field Foot_Bone_Name FName
---@field Knee_Bone_Name FName
---@field Thigh_Bone_Name FName
---@field Warp_Lift_Reference_Location float
---@field Warp_Param_Adder float
---@field Min_Max_Warp FVector2D
---@field max_extra_compression_height float
local FDragonData_WarpLimbsData = {}



---@class FSocketDragonReference
---@field SocketName FName
local FSocketDragonReference = {}



---@class UDragonIKPhysicsComponent : UActorComponent
---@field individual_bone_selection TArray<FName>
---@field Influence_Stopping_Bones TArray<FName>
---@field Override_Handle_Strength_Multiplier TArray<FDragonData_PhysicsHandleMultiplier>
---@field Linear_Strength int32
---@field Angular_Strength int32
---@field Linear_Damp int32
---@field Angular_Damp int32
---@field use_auto_blending_logic boolean
---@field modify_physics_states boolean
---@field Hit_Enable_Speed int32
---@field Hit_Disable_Speed int32
---@field hit_delay_time float
local UDragonIKPhysicsComponent = {}

function UDragonIKPhysicsComponent:ReleaseAllHandles() end
function UDragonIKPhysicsComponent:ReGrabAllHandles() end
---@param HitComp UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param NormalImpulse FVector
---@param Hit FHitResult
function UDragonIKPhysicsComponent:OnHitCallback(HitComp, OtherActor, OtherComp, NormalImpulse, Hit) end
function UDragonIKPhysicsComponent:ModifyAllHandleTransforms() end
---@param skeleton_input USkeletalMeshComponent
function UDragonIKPhysicsComponent:FirstTimeInitialization(skeleton_input) end
function UDragonIKPhysicsComponent:CacheSimulationStates() end


---@class UDragonIK_Library : UObject
local UDragonIK_Library = {}

---@param LookAtFromTransform FTransform
---@param LookAtTarget FVector
---@return FTransform
function UDragonIK_Library:QuatLookXatLocation(LookAtFromTransform, LookAtTarget) end
---@param Source_Location FVector
---@param lookAt FVector
---@param upDirection FVector
---@return FRotator
function UDragonIK_Library:LookAtVector_V2(Source_Location, lookAt, upDirection) end
---@param Source FVector
---@param Target FVector
---@param UpVector FVector
---@return FRotator
function UDragonIK_Library:LookAtRotation_V3(Source, Target, UpVector) end
---@param lookAt FVector
---@param upDirection FVector
---@return FRotator
function UDragonIK_Library:CustomLookRotation(lookAt, upDirection) end


