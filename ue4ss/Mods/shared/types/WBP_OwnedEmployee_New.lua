---@meta

---@class UWBP_OwnedEmployee_New_C : UGSSBaseWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OnHoverAnimation UWidgetAnimation
---@field ActionButton_TXT UTextBlock
---@field CancelDialogue UDragoButton
---@field SchifOverlay UOverlay
---@field AICharacter AAICharacterBase
---@field IsLocked boolean
---@field IsActiveForChanged boolean
---@field IsShowStatus boolean
---@field AmountToPay int32
---@field Employ AEmployee_Base_C
---@field ButtonDialog TArray<UButton>
---@field selectColl int32
---@field selectRow int32
---@field OptionAccept UWBP_OptionAccept_C
---@field NewLocalVar_0 TSubclassOf<UTaskBase>
---@field Pay10 float
---@field Pay50 float
---@field Pay100 float
---@field LastCardInPC boolean
local UWBP_OwnedEmployee_New_C = {}

function UWBP_OwnedEmployee_New_C:AfterPayingHidePayGraphic() end
---@param Row int32
---@param Coll int32
function UWBP_OwnedEmployee_New_C:SetNewPos(Row, Coll) end
---@param NewTask TSubclassOf<UTaskBase>
---@param IgnoreMoney boolean
function UWBP_OwnedEmployee_New_C:ResumeWork(NewTask, IgnoreMoney) end
---@param IsOpenDialog boolean
function UWBP_OwnedEmployee_New_C:Clicked(IsOpenDialog) end
function UWBP_OwnedEmployee_New_C:DecrermentRow() end
function UWBP_OwnedEmployee_New_C:IncrementRow() end
UWBP_OwnedEmployee_New_C['Change Row'] = function(self, ) end
function UWBP_OwnedEmployee_New_C:ClickShowStatus() end
function UWBP_OwnedEmployee_New_C:Destruct() end
function UWBP_OwnedEmployee_New_C:OnDialogOpen() end
---@param UpdatedTime FTimeStruct
function UWBP_OwnedEmployee_New_C:UpdateTextInfo(UpdatedTime) end
function UWBP_OwnedEmployee_New_C:OnDialogClosed() end
function UWBP_OwnedEmployee_New_C:InitGamePad() end
---@param UpdatedTime FTimeStruct
function UWBP_OwnedEmployee_New_C:UpdateInfo(UpdatedTime) end
function UWBP_OwnedEmployee_New_C:BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_OwnedEmployee_New_C:CancelFromPC() end
function UWBP_OwnedEmployee_New_C:DPadUp_Press_1() end
function UWBP_OwnedEmployee_New_C:DPadDown_Press_1() end
function UWBP_OwnedEmployee_New_C:AButton_Press_1() end
function UWBP_OwnedEmployee_New_C:CustomEscape() end
function UWBP_OwnedEmployee_New_C:Construct() end
---@param EntryPoint int32
function UWBP_OwnedEmployee_New_C:ExecuteUbergraph_WBP_OwnedEmployee_New(EntryPoint) end


