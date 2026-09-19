---@meta

---@class UWBP_OwnedEmployee_C : UDragoWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OnHoverAnimation UWidgetAnimation
---@field ActionButton_TXT UTextBlock
---@field AdditionalHints UHorizontalBox
---@field CancelDialogue UDragoButton
---@field MiniGames_Tutorial UMiniGames_Tutorial_C
---@field OpenPayEmploAlarm UPC_Notification_C
---@field SchifOverlay UOverlay
---@field WBP_KeyHint_RightButton_1 UWBP_KeyHint_C
---@field WBP_KeyHint_RightButton_2 UWBP_KeyHint_C
---@field WBP_KeyHint_RightButton_3 UWBP_KeyHint_C
---@field AICharacter AAICharacterBase
---@field IsLocked boolean
---@field IsShowStatus boolean
---@field OpenFromPC boolean
---@field Employ AEmployee_Base_C
---@field selectColl int32
---@field selectRow int32
---@field OptionAccept UWBP_OptionAccept_C
---@field NewLocalVar_0 TSubclassOf<UTaskBase>
---@field OpenedComboBox int32
---@field GamePadEmployeeSchedule int32
---@field FromResetEmployeePicker boolean
---@field FromFirstJobPicker boolean
---@field GamePadPreviousEmployeeButton int32
---@field GamePadCurrentTab int32
---@field GamePadHintSchedule UWBP_KeyHint_C
---@field GamePadHintTimer FTimerHandle
local UWBP_OwnedEmployee_C = {}

---@param MyGeometry FGeometry
---@param InAnalogInputEvent FAnalogInputEvent
---@return FEventReply
function UWBP_OwnedEmployee_C:OnAnalogValueChanged(MyGeometry, InAnalogInputEvent) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_OwnedEmployee_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_OwnedEmployee_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@param Key FKey
UWBP_OwnedEmployee_C['Game Pad Schedule Navigate'] = function(self, Key) end
---@param CheckBoxIndex int32
---@param Increase boolean
UWBP_OwnedEmployee_C['Game Pad Navigate Combo Boxes'] = function(self, CheckBoxIndex, Increase) end
---@param Last boolean
UWBP_OwnedEmployee_C['Game Padon Last Card'] = function(self, Last) end
---@param IsOpenw boolean
---@param ComboBoxIndex int32
UWBP_OwnedEmployee_C['Game Pad Check Box Opened'] = function(self, IsOpenw, ComboBoxIndex) end
---@param NavigateLeft boolean
function UWBP_OwnedEmployee_C:GamePadNavigateNextTab(NavigateLeft) end
---@param NewTask TSubclassOf<UTaskBase>
---@param IgnoreMoney boolean
function UWBP_OwnedEmployee_C:ResumeWork(NewTask, IgnoreMoney) end
function UWBP_OwnedEmployee_C:Construct() end
---@param UpdatedTime FTimeStruct
function UWBP_OwnedEmployee_C:UpdateInfo(UpdatedTime) end
function UWBP_OwnedEmployee_C:Destruct() end
function UWBP_OwnedEmployee_C:BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_OwnedEmployee_C:CancelFromPC() end
function UWBP_OwnedEmployee_C:Close() end
function UWBP_OwnedEmployee_C:CloseWidget() end
function UWBP_OwnedEmployee_C:GamePadHint() end
function UWBP_OwnedEmployee_C:GamePadAddHint() end
---@param EntryPoint int32
function UWBP_OwnedEmployee_C:ExecuteUbergraph_WBP_OwnedEmployee(EntryPoint) end


