---@meta

---@class ACameraSnapPoint_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SkeletalMesh USkeletalMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field StartDelay float
---@field TargetCustomizationPart ACustomizationHousePart_BP_C
---@field CurrentDurability float
---@field MaxDurability float
---@field Direction EWallSide
---@field UserPaintBroom APaintBrush
---@field Widget UWBP_WallPaint_C
---@field Speed float
---@field AxisTurn float
---@field AxisLookUp float
---@field FinishSpeed float
---@field indexPaintPoint int32
---@field TargetDurability float
---@field LerpSpeed float
---@field PaintPower float
---@field LPMHold boolean
---@field SpawnedPoints TArray<APaintWallControlPoint_C>
---@field NewColor FLinearColor
---@field PaintColorType EColorType
---@field ExitMinigameDurability float
local ACameraSnapPoint_C = {}

---@param Object UObject
function ACameraSnapPoint_C:OnPaintingFInish(Object) end
---@param Hold boolean
function ACameraSnapPoint_C:Press(Hold) end
---@return boolean
function ACameraSnapPoint_C:PointInRange() end
---@param ActivePoint APaintWallControlPoint_C
function ACameraSnapPoint_C:GetCurrentActivePoint(ActivePoint) end
function ACameraSnapPoint_C:ActivePoints() end
function ACameraSnapPoint_C:CalcDurability() end
function ACameraSnapPoint_C:SpawnPoints() end
---@param BackArrowBrush UArrowComponent
function ACameraSnapPoint_C:GetPaintBrush(BackArrowBrush) end
---@param Key FKey
function ACameraSnapPoint_C:InpActEvt_LPM_K2Node_InputActionEvent_2(Key) end
---@param Key FKey
function ACameraSnapPoint_C:InpActEvt_LPM_K2Node_InputActionEvent_1(Key) end
---@param Key FKey
function ACameraSnapPoint_C:InpActEvt_Interaction_F_K2Node_InputActionEvent_0(Key) end
function ACameraSnapPoint_C:ReceiveBeginPlay() end
---@param AxisValue float
function ACameraSnapPoint_C:InpAxisEvt_Turn_K2Node_InputAxisEvent_0(AxisValue) end
---@param AxisValue float
function ACameraSnapPoint_C:InpAxisEvt_LookUp_K2Node_InputAxisEvent_1(AxisValue) end
---@param DeltaSeconds float
function ACameraSnapPoint_C:ReceiveTick(DeltaSeconds) end
---@param DestroyedActor AActor
function ACameraSnapPoint_C:CustomEvent_0(DestroyedActor) end
function ACameraSnapPoint_C:AssingPaintWall() end
---@param EntryPoint int32
function ACameraSnapPoint_C:ExecuteUbergraph_CameraSnapPoint(EntryPoint) end


