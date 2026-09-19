---@meta

---@class ABP_Lockpicking_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PostProcessComponent UPostProcessComponent
---@field PickPosition UStaticMeshComponent
---@field Pick UStaticMeshComponent
---@field ScrewDriver UStaticMeshComponent
---@field ForceFeedback UForceFeedbackComponent
---@field PointLight UPointLightComponent
---@field InnerLock UStaticMeshComponent
---@field FrameRing UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field Settings FLockpicking_Settings
---@field OriginRotation FRotator
---@field LockType FText
---@field ToleranceMultiplier float
---@field DynaimcTolerance float
---@field WidgetInstance UWBP_LockpickingHUD_C
---@field LockedObject UBP_LockComponent_C
---@field PickDamage float
---@field DamageMultiplier float
---@field ['ApplyDamage?'] boolean
---@field LockPickingComponent UBP_LockPickingComponent_C
---@field RotationSound UAudioComponent
---@field MovingLock boolean
---@field PickTarget float
---@field TurnValue float
---@field DeltaMultiplier float
---@field WiggleCounter int32
---@field WiggleDirection boolean
---@field FocusedActor AActor
local ABP_Lockpicking_C = {}

---@param TurnValue float
function ABP_Lockpicking_C:TurnLock(TurnValue) end
function ABP_Lockpicking_C:TurnLockBackToOrigin() end
function ABP_Lockpicking_C:UpdateLock() end
---@param Location float
function ABP_Lockpicking_C:RotatePick(Location) end
function ABP_Lockpicking_C:MovePickWithLock() end
function ABP_Lockpicking_C:Wiggle() end
---@param Difficulty int32
function ABP_Lockpicking_C:LockSetup(Difficulty) end
function ABP_Lockpicking_C:UserConstructionScript() end
---@param Key FKey
function ABP_Lockpicking_C:InpActEvt_Escape_K2Node_InputActionEvent_0(Key) end
function ABP_Lockpicking_C:OpenLock() end
---@param DeltaSeconds float
function ABP_Lockpicking_C:ReceiveTick(DeltaSeconds) end
function ABP_Lockpicking_C:QuitPicking() end
function ABP_Lockpicking_C:UpdateHUDInfo() end
---@param AxisValue float
function ABP_Lockpicking_C:InpAxisEvt_MoveRight_K2Node_InputAxisEvent_0(AxisValue) end
---@param AxisValue float
function ABP_Lockpicking_C:InpAxisEvt_JumpAxis_K2Node_InputAxisEvent_2(AxisValue) end
function ABP_Lockpicking_C:ReceiveBeginPlay() end
---@param AxisValue float
function ABP_Lockpicking_C:InpAxisEvt_Turn_K2Node_InputAxisEvent_1(AxisValue) end
function ABP_Lockpicking_C:AddPickDamage() end
---@param EntryPoint int32
function ABP_Lockpicking_C:ExecuteUbergraph_BP_Lockpicking(EntryPoint) end


