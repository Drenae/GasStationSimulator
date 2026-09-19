---@meta

---@class UWBP_ReportTool_Checkbox_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CheckBox UCheckBox
---@field Name UTextBlock
---@field ReportType FText
---@field IsActive boolean
---@field REF_ReportTool UWBP_ReportTool_C
local UWBP_ReportTool_Checkbox_C = {}

---@param IsDesignTime boolean
function UWBP_ReportTool_Checkbox_C:PreConstruct(IsDesignTime) end
---@param bIsChecked boolean
function UWBP_ReportTool_Checkbox_C:BndEvt__WBP_ReportTool_Checkbox_Checkbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bIsChecked) end
function UWBP_ReportTool_Checkbox_C:Construct() end
---@param EntryPoint int32
function UWBP_ReportTool_Checkbox_C:ExecuteUbergraph_WBP_ReportTool_Checkbox(EntryPoint) end


