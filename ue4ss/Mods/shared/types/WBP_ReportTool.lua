---@meta

---@class UWBP_ReportTool_C : UBugReportUploaderWidgetBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CheckReportType UWidgetAnimation
---@field Failed UWidgetAnimation
---@field Success UWidgetAnimation
---@field Loading UWidgetAnimation
---@field Audio UWBP_ReportTool_Checkbox_C
---@field Crash UWBP_ReportTool_Checkbox_C
---@field DescriptionTextBox UMultiLineEditableText
---@field ErrorMsg UTextBlock
---@field framework UWBP_ReportTool_Checkbox_C
---@field gameplay UWBP_ReportTool_Checkbox_C
---@field IDText_1 UTextBlock
---@field MailTextBox UEditableTextBox
---@field Other UWBP_ReportTool_Checkbox_C
---@field PC_ExitButton_WBP UPC_ExitButton_WBP_C
---@field ReportSwitcher UWidgetSwitcher
---@field ReportTools_HorizontalBox UHorizontalBox
---@field SubmitButton UGSSButton
---@field TryAgain_Button UGSSButton
---@field Visual UWBP_ReportTool_Checkbox_C
---@field ReportTools TArray<UWBP_ReportTool_Checkbox_C>
---@field NewVar_0 boolean
local UWBP_ReportTool_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_ReportTool_C:OnKeyDown(MyGeometry, InKeyEvent) end
function UWBP_ReportTool_C:DeleteSaves() end
---@param Saves TArray<FFileInfoData>
function UWBP_ReportTool_C:PrepareSaves(Saves) end
---@param Mail FString
function UWBP_ReportTool_C:GetMail(Mail) end
---@param Description FString
function UWBP_ReportTool_C:GetDescription(Description) end
---@param Type EReportCategory
function UWBP_ReportTool_C:GetReportType(Type) end
---@param Report FReportRequest
UWBP_ReportTool_C['Prepare Report'] = function(self, Report) end
function UWBP_ReportTool_C:Construct() end
function UWBP_ReportTool_C:BndEvt__WBP_ReportTool_PC_ExitButton_WBP_K2Node_ComponentBoundEvent_0_OnExit__DelegateSignature() end
function UWBP_ReportTool_C:BndEvt__WBP_ReportTool_SubmitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
---@param bCompletedSuccessfully boolean
---@param ReportId FString
---@param ErrorMessage FString
function UWBP_ReportTool_C:OnReportCompleted(bCompletedSuccessfully, ReportId, ErrorMessage) end
function UWBP_ReportTool_C:BndEvt__WBP_ReportTool_TryAgain_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() end
function UWBP_ReportTool_C:Destruct() end
function UWBP_ReportTool_C:GamePadClickExit() end
---@param EntryPoint int32
function UWBP_ReportTool_C:ExecuteUbergraph_WBP_ReportTool(EntryPoint) end


