---@meta

---@class UWBP_DepartureScreenAP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BG_Color_Img UImage
---@field BlockerOnSkillCD_Sizer USizeBox
---@field Departure_MainHorizontal UVerticalBox
---@field Image_19 UImage
---@field Image_275 UImage
---@field InvalidationBox_0 UInvalidationBox
---@field OnRunWay_Border UBorder
---@field OPEN_CLOSED_Switcher UWidgetSwitcher
---@field Overlay_Header UOverlay
---@field SkillCD_TXT UTextBlock
---@field WBP_ClosedDLCText UWBP_ClosedDLCText_C
---@field Runway_Soft_REF TSoftObjectPtr<ARunway>
---@field ScheduleToPopulateList TArray<FPlaneEntry>
---@field OnRunwayPlane_REF UWBP_DepartureScreenSinglePosition_C
---@field bIsInManager boolean
---@field Confirm boolean
---@field GamePadConfirm boolean
---@field GamePadConfirmREF UConfirmAirplaneRemove_WBP_C
local UWBP_DepartureScreenAP_C = {}

---@param Loaded UObject
function UWBP_DepartureScreenAP_C:OnLoaded_B055CDD74D5E6608962E7A809F6AE633(Loaded) end
---@param Loaded UObject
function UWBP_DepartureScreenAP_C:OnLoaded_F3C7B0D34CA02FDF4379898D4228B41E(Loaded) end
function UWBP_DepartureScreenAP_C:Construct() end
---@param Schedule TArray<FPlaneEntry>
function UWBP_DepartureScreenAP_C:WholeSchedule(Schedule) end
---@param NewEntry FPlaneEntry
function UWBP_DepartureScreenAP_C:OnNewPlaneEntry(NewEntry) end
---@param Schedule TArray<FPlaneEntry>
function UWBP_DepartureScreenAP_C:OnSchedulUpdated(Schedule) end
---@param CurrentAirplane ATradingAirplane
function UWBP_DepartureScreenAP_C:OnAirplaneSet(CurrentAirplane) end
---@param Runway ERunway
function UWBP_DepartureScreenAP_C:OnTakeOff(Runway) end
---@param TimeUpdated int32
function UWBP_DepartureScreenAP_C:UpdateTimeToTakeOff(TimeUpdated) end
---@param PlaneIndex int32
---@param ItemIndex int32
---@param IconVisibility EItemIconVisibility
function UWBP_DepartureScreenAP_C:OnitemReveal(PlaneIndex, ItemIndex, IconVisibility) end
function UWBP_DepartureScreenAP_C:DisableOnTakeOffAndColapse() end
function UWBP_DepartureScreenAP_C:UpdateTextTime() end
function UWBP_DepartureScreenAP_C:OnAirstripLoaded() end
function UWBP_DepartureScreenAP_C:OnAirstripLoadedDelayed() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_DepartureScreenAP_C:Tick(MyGeometry, InDeltaTime) end
---@param IsThereConfirm boolean
---@param ConfirmREF UConfirmAirplaneRemove_WBP_C
function UWBP_DepartureScreenAP_C:GamePadIsThereConfirm(IsThereConfirm, ConfirmREF) end
---@param DLCName EDLCName
---@param bActivated boolean
function UWBP_DepartureScreenAP_C:CustomEvent_0(DLCName, bActivated) end
---@param EntryPoint int32
function UWBP_DepartureScreenAP_C:ExecuteUbergraph_WBP_DepartureScreenAP(EntryPoint) end


