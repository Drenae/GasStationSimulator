---@meta

---@class AUGP_Player_C : AGuitarPlayerPawn
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PostProcess UPostProcessComponent
---@field GuitarNoPossess UStaticMeshComponent
---@field Camera UCameraComponent
---@field SpringArm USpringArmComponent
---@field Guitar UStaticMeshComponent
---@field Chair UStaticMeshComponent
---@field TriggerZone UBoxComponent
---@field SkeletalMesh USkeletalMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field WheelKeysToUse EUGPScaleChoice::Type
---@field CustomWheelKeys TArray<FName>
---@field KeysToUse TArray<FName>
---@field UGP_UI UUGP_UI_C
---@field Volume float
---@field FadeAmountPerFrame float
---@field CameraMode EUGPCameraMode::Type
---@field CameraSpeed float
---@field ['180CameraRightLimit'] float
---@field ['180CameraLeftLimit'] float
---@field ['360CameraRotationDirection'] int32
---@field ['Wheel Part Inside Color'] FLinearColor
---@field ['Wheel Part Outside Color'] FLinearColor
---@field ['Wheel Part Text Color'] FLinearColor
---@field ['Hover Wheel Part Inside Color'] FLinearColor
---@field ['Hover Wheel Part Outside Color'] FLinearColor
---@field ['Hover Wheel Part Text Color'] FLinearColor
---@field ['Hover Wheel Scale Up Percentage'] float
---@field FretBoardColor FLinearColor
---@field FretColor FLinearColor
---@field NeckColor FLinearColor
---@field NutColor FLinearColor
---@field TunerColor FLinearColor
---@field FretBoardMetallic float
---@field FretMetallic float
---@field NeckMetallic float
---@field TunerMetallic float
---@field BodyColor FLinearColor
---@field BodyRimColor FLinearColor
---@field BridgeBaseColor FLinearColor
---@field BridgePartsColor FLinearColor
---@field PickGuardColor FLinearColor
---@field BodyMetallic float
---@field PickguardMetallic float
---@field ['180CameraMovementSide'] int32
---@field String_E FLinearColor
---@field String_B FLinearColor
---@field String_G FLinearColor
---@field String_D FLinearColor
---@field String_A FLinearColor
---@field String_ELow FLinearColor
---@field FadeOutCameraTH FTimerHandle
---@field PosessionController AController
---@field GamePadTime float
---@field InteractionName FName
local AUGP_Player_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AUGP_Player_C:AlternativeInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param Hit FHitResult
---@return boolean
function AUGP_Player_C:ShowTooltip(Pawn, Hit) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AUGP_Player_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function AUGP_Player_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Actor AActor
---@param RotateToTransform boolean
---@return FTransform
function AUGP_Player_C:GetInteractiveTransform(Actor, RotateToTransform) end
---@param GSSWheeledVehicle AGSSWheeledVehicle
---@return APathPoint
function AUGP_Player_C:GetPathPoint(GSSWheeledVehicle) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AUGP_Player_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param Throw boolean
---@param AimingTime float
---@return boolean
function AUGP_Player_C:UseItem(Pawn, Throw, AimingTime) end
---@return FName
function AUGP_Player_C:GetInteractionName() end
---@param PlayerController AController
function AUGP_Player_C:PrePosession(PlayerController) end
---@param X float
---@param Y float
function AUGP_Player_C:PlayInGamepad(X, Y) end
function AUGP_Player_C:PreUnpossession() end
function AUGP_Player_C:PostPosession() end
function AUGP_Player_C:MakePossession() end
function AUGP_Player_C:FadeOutCamera() end
function AUGP_Player_C:CameraMovementConstant() end
---@param DeltaTime float
AUGP_Player_C['Camera Movement On Tick'] = function(self, DeltaTime) end
function AUGP_Player_C:InitializeGuitarColor() end
function AUGP_Player_C:InitializeWidget() end
---@param StringName FString
function AUGP_Player_C:StrumString(StringName) end
function AUGP_Player_C:SetupChordWheelKeys() end
---@param ScaleChoice EUGPScaleChoice::Type
function AUGP_Player_C:SetWheelKeysFromEnum(ScaleChoice) end
function AUGP_Player_C:UserConstructionScript() end
---@param Key FKey
function AUGP_Player_C:InpActEvt_SpaceBar_K2Node_InputKeyEvent_12(Key) end
---@param Key FKey
function AUGP_Player_C:InpActEvt_A_K2Node_InputKeyEvent_11(Key) end
---@param Key FKey
function AUGP_Player_C:InpActEvt_S_K2Node_InputKeyEvent_10(Key) end
---@param Key FKey
function AUGP_Player_C:InpActEvt_D_K2Node_InputKeyEvent_9(Key) end
---@param Key FKey
function AUGP_Player_C:InpActEvt_Z_K2Node_InputKeyEvent_8(Key) end
---@param Key FKey
function AUGP_Player_C:InpActEvt_X_K2Node_InputKeyEvent_7(Key) end
---@param Key FKey
function AUGP_Player_C:InpActEvt_C_K2Node_InputKeyEvent_6(Key) end
---@param Key FKey
function AUGP_Player_C:InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_5(Key) end
---@param Key FKey
function AUGP_Player_C:InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_4(Key) end
---@param Key FKey
function AUGP_Player_C:InpActEvt_Interaction_F_K2Node_InputActionEvent_0(Key) end
---@param Key FKey
function AUGP_Player_C:InpActEvt_Right_K2Node_InputKeyEvent_3(Key) end
---@param Key FKey
function AUGP_Player_C:InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2(Key) end
---@param Key FKey
function AUGP_Player_C:InpActEvt_Left_K2Node_InputKeyEvent_1(Key) end
---@param Key FKey
function AUGP_Player_C:InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_0(Key) end
---@param AxisValue float
function AUGP_Player_C:InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_0(AxisValue) end
---@param AxisValue float
function AUGP_Player_C:InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_1(AxisValue) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function AUGP_Player_C:BndEvt__TriggerZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function AUGP_Player_C:BndEvt__TriggerZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex) end
---@param DeltaSeconds float
function AUGP_Player_C:ReceiveTick(DeltaSeconds) end
function AUGP_Player_C:ShowInteractionAlertMessage() end
---@param Pawn APawn
function AUGP_Player_C:DisableInteractionInfo(Pawn) end
---@param EntryPoint int32
function AUGP_Player_C:ExecuteUbergraph_UGP_Player(EntryPoint) end


