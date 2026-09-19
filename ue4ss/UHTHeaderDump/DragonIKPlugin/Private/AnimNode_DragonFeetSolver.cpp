#include "AnimNode_DragonFeetSolver.h"

FAnimNode_DragonFeetSolver::FAnimNode_DragonFeetSolver() {
    this->ik_type = EIK_Type_Plugin::ENUM_Two_Bone_Ik;
    this->trace_type = EIKTrace_Type_Plugin::ENUM_LineTrace_Type;
    this->Trace_Radius = 0.00f;
    this->Override_Curve_Velocity = false;
    this->custom_velocity = 0.00f;
    this->loc_interp_type = EInterpoLocation_Type_Plugin::ENUM_DivisiveLoc_Interp;
    this->rot_interp_type = EInterpoRotation_Type_Plugin::ENUM_DivisiveRot_Interp;
    this->virtual_scale = 0.00f;
    this->automatic_leg_make = false;
    this->Use_OptionalRef_Feet_As_Ref = false;
    this->enable_solver = false;
    this->Work_Outside_PIE = false;
    this->interpolate_only_z = false;
    this->shift_speed = 0.00f;
    this->Location_Lerp_Speed = 0.00f;
    this->feet_rotation_speed = 0.00f;
    this->ignore_shift_speed = false;
    this->Ignore_Lerping = false;
    this->Ignore_Location_Lerping = false;
    this->Enable_Complex_Rotation_Method = false;
    this->Trace_Channel = TraceTypeQuery1;
    this->Anti_Trace_Channel = TraceTypeQuery1;
    this->FPS_Lerp_Treshold = 0.00f;
    this->line_trace_upper_height = 0.00f;
    this->line_trace_down_height = 0.00f;
    this->Use_Anti_Channel = false;
    this->Should_Rotate_Feet = false;
    this->show_trace_in_game = false;
    this->Enable_Pitch = false;
    this->Enable_Roll = false;
    this->Use_Four_Point_Feets = false;
    this->Enable_Foot_Lift_Limit = false;
    this->Affect_Toes_Always = false;
    this->Max_Limb_Radius = 0.00f;
    this->sticky_feet_mode = false;
    this->sticky_feet_on_speed = 0.00f;
    this->sticky_feet_off_speed = 0.00f;
    this->Sticky_Feet_Range = 0.00f;
    this->sticky_floor_detection = false;
    this->floor_value = 0.00f;
    this->Auto_Sticky_Toggle = false;
    this->Foot_01_Height_Offset = 0.00f;
    this->Foot_02_Height_Offset = 0.00f;
    this->Foot_03_Height_Offset = 0.00f;
    this->Foot_04_Height_Offset = 0.00f;
}

