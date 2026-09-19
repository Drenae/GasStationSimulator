---@meta

---@class UTestScalingWidgetEmploye_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field LevelUpAnim UWidgetAnimation
---@field ActivityIcon UImage
---@field BlockIcon UImage
---@field EmployeAtWork_IMG UImage
---@field Image_294 UImage
---@field LevelUpOverlay UOverlay
---@field MainOverlay UOverlay
---@field PayEmployee_IMG UImage
---@field VIPBlockOverlay UOverlay
---@field EmployeeREF AEmployee_Base_C
---@field RangeClose float
---@field RangeMedium float
---@field RangeFar float
---@field EmployeWorkType MINI_GAMES_TYPES::Type
local UTestScalingWidgetEmploye_C = {}

---@param MyGeometry FGeometry
---@param InDeltaTime float
function UTestScalingWidgetEmploye_C:Tick(MyGeometry, InDeltaTime) end
function UTestScalingWidgetEmploye_C:ShowPayForWorkGraphic() end
---@param WorkType EWorkerWorkType
function UTestScalingWidgetEmploye_C:ShowAtWorkGraphic(WorkType) end
function UTestScalingWidgetEmploye_C:HideAtWorkGraphic() end
function UTestScalingWidgetEmploye_C:HidePayForWorkGraphic() end
function UTestScalingWidgetEmploye_C:Construct() end
function UTestScalingWidgetEmploye_C:Destruct() end
---@param NewLevel int32
function UTestScalingWidgetEmploye_C:OnLevelUpEvent(NewLevel) end
function UTestScalingWidgetEmploye_C:ColapsedGraphic() end
---@param EntryPoint int32
function UTestScalingWidgetEmploye_C:ExecuteUbergraph_TestScalingWidgetEmploye(EntryPoint) end


