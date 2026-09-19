---@meta

---@class UWBP_PlatformEvaluationTooltip_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Image UImage
---@field Image_1 UImage
---@field Image_2 UImage
---@field Image_3 UImage
---@field Image_40 UImage
---@field Image_130 UImage
---@field ScrollBox_0 UScrollBox
---@field VerticalBox_Customization UVerticalBox
---@field VerticalBox_CustomizationPositions UVerticalBox
---@field VerticalBox_Parts UVerticalBox
---@field VerticalBox_PartsPositions UVerticalBox
---@field VerticalBox_Stats UVerticalBox
---@field VerticalBox_StatsPositions UVerticalBox
---@field VerticalBox_Summary UVerticalBox
---@field VerticalBox_SummaryPositions UVerticalBox
---@field VerticalBox_Wreck UVerticalBox
---@field VerticalBox_WreckPositions UVerticalBox
---@field WreckRef AJunkyardCarWreck
---@field AverageData FCarPartData
---@field bAnyDecal boolean
---@field PaintPrice float
---@field PlatformPanelRef UWBP_PlatformPanelNew_C
local UWBP_PlatformEvaluationTooltip_C = {}

---@param Wreck AJunkyardCarWreck
---@param PlatformPanelRef UWBP_PlatformPanelNew_C
function UWBP_PlatformEvaluationTooltip_C:Setup(Wreck, PlatformPanelRef) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
function UWBP_PlatformEvaluationTooltip_C:OnMouseEnter(MyGeometry, MouseEvent) end
---@param MouseEvent FPointerEvent
function UWBP_PlatformEvaluationTooltip_C:OnMouseLeave(MouseEvent) end
---@param EntryPoint int32
function UWBP_PlatformEvaluationTooltip_C:ExecuteUbergraph_WBP_PlatformEvaluationTooltip(EntryPoint) end


