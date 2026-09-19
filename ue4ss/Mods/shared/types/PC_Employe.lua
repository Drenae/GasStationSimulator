---@meta

---@class UPC_Employe_C : UPcBaseTab
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FadeOutAnimation UWidgetAnimation
---@field FadeInAnimation UWidgetAnimation
---@field CONSTRUCT_ANIMATION UWidgetAnimation
---@field BackgroundBorder UBorder
---@field BuyCaravanasBlocker UBorder
---@field CampersStatusSpot UBorder
---@field CaravanasFrame_IMG UImage
---@field CaravanasTab UGSSButton
---@field EmployeeFrame_IMG UImage
---@field EmployEmployeeHorizontal UHorizontalBox
---@field HireEmployeeTab UGSSButton
---@field HireFrame_IMG UImage
---@field Image_83 UImage
---@field Image_240 UImage
---@field Image_420 UImage
---@field NewWorkers UOverlay
---@field OwnedEmploye UScrollBox
---@field OwnedEmployeeTab UButton
---@field OwnedEmployeeWrap UWrapBox
---@field PayAllEmployeeSalary UButton
---@field PayAllEmployeOverlay UOverlay
---@field RightNextClickTXT UTextBlock
---@field ScaleBox_Schedule UScaleBox
---@field ScheduleFrame_IMG UImage
---@field ScheduleTab UGSSButton
---@field ToLeftButton UButton
---@field ToRightButton UButton
---@field TotalAllEmployeSalaryTXT UTextBlock
---@field WBP_CampersStatus UWBP_CampersStatus_C
---@field WBP_KeyHint_RightButton UWBP_KeyHint_C
---@field WBP_KeyHint_RightButton_1 UWBP_KeyHint_C
---@field WBP_NextEmployeeTimer UWBP_NextEmployeeTimer_C
---@field WBP_ScheduleMain UWBP_ScheduleMain_C
---@field EmployeEvent UEvent_NewEmployee_C
---@field EmployeeList TArray<AActor>
---@field CurrentTab FString
---@field IsAditionalRow boolean
---@field isNext int32
---@field KeyRowSelected int32
---@field ButtonArray TArray<UButton>
---@field keySelected int32
---@field MapViewMax TMap<int32, int32>
---@field ArrayEmployee TArray<UWBP_Employee_C>
---@field keySelected2 int32
---@field OwnedEmployeeArray TArray<UWBP_OwnedEmployee_New_C>
---@field AditionalRow int32
---@field ControlMap TMap<int32, int32>
---@field IsOpenEmployeeDialog boolean
---@field NewVar_0 boolean
---@field AllEmployeMoneyEarned float
---@field BeforeResetValue float
---@field GamePadCurrentTab int32
---@field GamePadEmployeeSchedule int32
---@field OpenedComboBox int32
---@field FromFirstJobPicker boolean
---@field FromResetEmployeePicker boolean
---@field GamePadPreviousEmployeeButton int32
---@field GamePadHireEmployee int32
---@field GamePadHintSchedule UWBP_KeyHint_C
---@field GamePadHintTimer FTimerHandle
local UPC_Employe_C = {}

---@param MyGeometry FGeometry
---@param InAnalogInputEvent FAnalogInputEvent
---@return FEventReply
function UPC_Employe_C:OnAnalogValueChanged(MyGeometry, InAnalogInputEvent) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UPC_Employe_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param Visible boolean
function UPC_Employe_C:HintsVisibility(Visible) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UPC_Employe_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@param Key FKey
UPC_Employe_C['Game Pad Schedule Navigate'] = function(self, Key) end
---@param CheckBoxIndex int32
---@param Increase boolean
UPC_Employe_C['Game Pad Navigate Combo Boxes'] = function(self, CheckBoxIndex, Increase) end
---@param IsOpenw boolean
---@param ComboBoxIndex int32
UPC_Employe_C['Game Pad Check Box Opened'] = function(self, IsOpenw, ComboBoxIndex) end
---@param Last boolean
UPC_Employe_C['Game Padon Last Card'] = function(self, Last) end
function UPC_Employe_C:PayAllEmployeSalary() end
function UPC_Employe_C:RefreshEmployeeWidget() end
function UPC_Employe_C:Clicked() end
---@param InputPin UWBP_Employee_C
UPC_Employe_C['Clicked Employee'] = function(self, InputPin) end
---@param IsLeft boolean
UPC_Employe_C['Click Button'] = function(self, IsLeft) end
function UPC_Employe_C:SetHovered() end
function UPC_Employe_C:decrementsRow() end
function UPC_Employe_C:IncrementsRow() end
function UPC_Employe_C:decrementsKey() end
function UPC_Employe_C:incrementsKey() end
---@param Loaded UClass
function UPC_Employe_C:OnLoaded_8CBB680D4BCAC49325AB5597F5EDCFC6(Loaded) end
---@param Loaded UClass
function UPC_Employe_C:OnLoaded_6CD0C7914EF1BD250357609C20880BAF(Loaded) end
---@param Loaded UClass
function UPC_Employe_C:OnLoaded_AAB4DED34C3DD571AFC863949EFA814E(Loaded) end
---@param KeyEvent FKeyEvent
function UPC_Employe_C:TopMenuHandle(KeyEvent) end
function UPC_Employe_C:Construct() end
---@param EmployeeWidgetREF UWBP_Employee_C
function UPC_Employe_C:OnClicked_Event_0(EmployeeWidgetREF) end
function UPC_Employe_C:RefreshEmployWorker() end
function UPC_Employe_C:RefreshOwnedEmployee() end
function UPC_Employe_C:BndEvt__ToLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UPC_Employe_C:BndEvt__ToRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
function UPC_Employe_C:FadeOut() end
function UPC_Employe_C:FadeIn() end
---@param UpdatedTime int32
function UPC_Employe_C:CustomEvent_0(UpdatedTime) end
function UPC_Employe_C:Destruct() end
function UPC_Employe_C:BndEvt__Caravanas_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() end
function UPC_Employe_C:BndEvt__Employee_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature() end
function UPC_Employe_C:BndEvt__OwnedEmployee_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature() end
function UPC_Employe_C:BndEvt__PayAllEmployeeSalary_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature() end
---@param UpdatedTime FTimeStruct
function UPC_Employe_C:CalculateAllEmployeSalary(UpdatedTime) end
function UPC_Employe_C:BndEvt__P_PC_Employee_ScheduleTab_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() end
---@param NavigationLeft boolean
function UPC_Employe_C:GamePadNavigateNextTab(NavigationLeft) end
function UPC_Employe_C:CustomEvent_1() end
function UPC_Employe_C:GamePadHoverFirstEmployee() end
function UPC_Employe_C:GamePadAddHint() end
function UPC_Employe_C:GamePadHint() end
---@param EntryPoint int32
function UPC_Employe_C:ExecuteUbergraph_PC_Employe(EntryPoint) end


