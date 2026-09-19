---@meta

---@class UWBP_WallPaint_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FXtextHolder UOverlay
---@field Inner_1BG UImage
---@field Inner_2BG UImage
---@field Overlay_1 UOverlay
---@field Overlay_2 UOverlay
---@field Pointer_Current UImage
---@field Pointer_Maximum UImage
---@field Pointer_Minimum UImage
---@field ProgressBar_58 UProgressBar
---@field SliderDown USlider
---@field SliderUp USlider
---@field Down float
---@field Up float
---@field DownTarget float
---@field UpTarget float
---@field Start boolean
---@field HousePart ACustomizationHousePart_BP_C
---@field AngleUp float
---@field AngleDown float
---@field AngleDown_Target float
---@field AngleUp_Target float
---@field LeftTime float
---@field StaticTextFX UStatic_Text_Fx_WBP_C
---@field LeftTimeToSlow float
---@field LeftTimeToKeepPose float
---@field Destroyed boolean
---@field Sound UAudioComponent
---@field SoundPlaying boolean
---@field ActionButton FText
local UWBP_WallPaint_C = {}

---@param Spawner UBoxComponent
---@param bSpawned boolean
function UWBP_WallPaint_C:TrySpawnDirtyPaintDecal(Spawner, bSpawned) end
---@param Speed float
---@param Speed1 float
function UWBP_WallPaint_C:UpdateSpeed(Speed, Speed1) end
function UWBP_WallPaint_C:Construct() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_WallPaint_C:Tick(MyGeometry, InDeltaTime) end
function UWBP_WallPaint_C:Stain() end
function UWBP_WallPaint_C:Destruct() end
function UWBP_WallPaint_C:ToSlow() end
function UWBP_WallPaint_C:HoldPosition() end
---@param EntryPoint int32
function UWBP_WallPaint_C:ExecuteUbergraph_WBP_WallPaint(EntryPoint) end


