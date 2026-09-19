---@meta

---@class UWBP_DepartureScreenSinglePosition_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field GuideBorder UWidgetAnimation
---@field ArrivingDepartureAnim UWidgetAnimation
---@field ActionButtonFlyingToStation UButton
---@field ActionButtonOnRunway UButton
---@field BG_Color_Img UImage
---@field DepartureArriving_TXT UTextBlock
---@field DepartureIndicator_IMG UImage
---@field DepartureState_TXT UTextBlock
---@field DepartureTime_Txt UTextBlock
---@field FakeButtonHover UButton
---@field FakeButtonHoverLanded UButton
---@field FakeFrameGuide UImage
---@field Flag_IMG UImage
---@field Image UImage
---@field Image_148 UImage
---@field Image_179 UImage
---@field Image_214 UImage
---@field Image_236 UImage
---@field Image_294 UImage
---@field LandingIndicator_IMG UImage
---@field Main_Horizontal UHorizontalBox
---@field MainButton UButton
---@field NiagaraSystemWidget_Sandstorm UNiagaraSystemWidget
---@field Overlay_extra_time UOverlay
---@field Overlay_Locked UOverlay
---@field Overlay_Sandstorm UOverlay
---@field PilotItems_Horizontal UHorizontalBox
---@field PlaneID_Txt UTextBlock
---@field PlayerItems_Horizontal UHorizontalBox
---@field ProgressBarPlayersItems UProgressBar
---@field ProgressBarPlayersItems_1 UProgressBar
---@field RemovePlaneButtons_Overlay UOverlay
---@field RemoveXrunway_IMG UImage
---@field RetainerBox_0 URetainerBox
---@field RetainerBox_1 URetainerBox
---@field TextBlock_84 UTextBlock
---@field Index int32
---@field SecondToDeparture int32
---@field SpawnAsLanded boolean
---@field DepartureScreen UWBP_DepartureScreenAP_C
---@field ConfirmRemovePlaneREF UConfirmAirplaneRemove_WBP_C
---@field PlaneStructureREF FPlaneEntry
---@field AirPlaneOnRunway ATradingAirplane
---@field DepartureScreen_2 UWBP_DepartureScreen2AP_C
---@field bIsInAirportManager boolean
---@field Timer FTimerHandle
---@field GamePadConfirmCreated FWBP_DepartureScreenSinglePosition_CGamePadConfirmCreated
---@field GamePadHovered boolean
local UWBP_DepartureScreenSinglePosition_C = {}

function UWBP_DepartureScreenSinglePosition_C:BndEvt__WBP_DepartureScrenAP_Button_12_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_DepartureScreenSinglePosition_C:Construct() end
---@param UpdatedDepartureTime int32
---@param BarPercentage float
function UWBP_DepartureScreenSinglePosition_C:UpdateDepartureTime(UpdatedDepartureTime, BarPercentage) end
function UWBP_DepartureScreenSinglePosition_C:RefreshOnNewPlaneLnaded() end
---@param BuyItem boolean
---@param ItemIndex int32
---@param IconVisibility EItemIconVisibility
function UWBP_DepartureScreenSinglePosition_C:RevealItem(BuyItem, ItemIndex, IconVisibility) end
function UWBP_DepartureScreenSinglePosition_C:BndEvt__WBP_DepartureScreenSinglePosition_ActionButtonOnRunway_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
function UWBP_DepartureScreenSinglePosition_C:BndEvt__WBP_DepartureScreenSinglePosition_ActionButtonFlyingToStation_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UWBP_DepartureScreenSinglePosition_C:BndEvt__WBP_DepartureScreenSinglePosition_ActionButtonFlyingToStation_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
function UWBP_DepartureScreenSinglePosition_C:BndEvt__WBP_DepartureScreenSinglePosition_ActionButtonOnRunway_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() end
function UWBP_DepartureScreenSinglePosition_C:BndEvt__WBP_DepartureScreenSinglePosition_ActionButtonOnRunway_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature() end
function UWBP_DepartureScreenSinglePosition_C:FakeHover() end
function UWBP_DepartureScreenSinglePosition_C:FakeUnhover() end
function UWBP_DepartureScreenSinglePosition_C:SetVizualWithDelay() end
function UWBP_DepartureScreenSinglePosition_C:UpdateTextTime() end
function UWBP_DepartureScreenSinglePosition_C:TakeOff() end
function UWBP_DepartureScreenSinglePosition_C:DisableOnTakeOffAndColapse() end
function UWBP_DepartureScreenSinglePosition_C:Destruct() end
function UWBP_DepartureScreenSinglePosition_C:OnAirportSandstormStarted_Event_0() end
function UWBP_DepartureScreenSinglePosition_C:OnAirportSandstormFinished_Event_0() end
function UWBP_DepartureScreenSinglePosition_C:OnExtraTimeSkillUsed_Event_0() end
function UWBP_DepartureScreenSinglePosition_C:OnExtraTimeSkillFinished_Event_0() end
---@param Runway ERunway
---@param CurrentStatus ECurrentStatus
function UWBP_DepartureScreenSinglePosition_C:OnAirplaneStautsChanged(Runway, CurrentStatus) end
function UWBP_DepartureScreenSinglePosition_C:SetEventsVisuals() end
function UWBP_DepartureScreenSinglePosition_C:Unhover() end
---@param NewUnlockableUIState FUnlockableUIState
function UWBP_DepartureScreenSinglePosition_C:StartGuideOnQuest(NewUnlockableUIState) end
function UWBP_DepartureScreenSinglePosition_C:GamePadDenyPlane() end
function UWBP_DepartureScreenSinglePosition_C:GamePadNotifyConfirmRemove() end
function UWBP_DepartureScreenSinglePosition_C:GamePadDenayPlaneFlyingToStation() end
---@param EntryPoint int32
function UWBP_DepartureScreenSinglePosition_C:ExecuteUbergraph_WBP_DepartureScreenSinglePosition(EntryPoint) end
function UWBP_DepartureScreenSinglePosition_C:GamePadConfirmCreated__DelegateSignature() end


