---@meta

---@class UWBP_DepartureScreen2AP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BG_Color_Img UImage
---@field BlockerOnSkillCD_Sizer USizeBox
---@field Departure_MainHorizontal UVerticalBox
---@field Image_19 UImage
---@field Image_275 UImage
---@field InvalidationBox_0 UInvalidationBox
---@field OnRunWay_Border UBorder
---@field OPEN_CLOSED_Switcher UWidgetSwitcher
---@field Overlay_3 UOverlay
---@field Overlay_Header UOverlay
---@field SkillCD_TXT UTextBlock
---@field WBP_ClosedDLCText UWBP_ClosedDLCText_C
---@field Runway_Soft_REF TSoftObjectPtr<ARunway>
---@field ScheduleToPopulateList TArray<FPlaneEntry>
---@field OnRunwayPlane_REF UWBP_DepartureScreenSinglePosition_C
---@field bIsInManager boolean
---@field GamePadConfirm boolean
---@field ['Game Pad Confirm REF'] UConfirmAirplaneRemove_WBP_C
local UWBP_DepartureScreen2AP_C = {}

---@param Loaded UObject
function UWBP_DepartureScreen2AP_C:OnLoaded_0599B5EB48A35611B41737B5D06AC3EA(Loaded) end
---@param Loaded UObject
function UWBP_DepartureScreen2AP_C:OnLoaded_A81601EA475A244E1E78E9AC96CA9F6A(Loaded) end
function UWBP_DepartureScreen2AP_C:Construct() end
---@param Schedule TArray<FPlaneEntry>
function UWBP_DepartureScreen2AP_C:WholeSchedule(Schedule) end
---@param NewEntry FPlaneEntry
function UWBP_DepartureScreen2AP_C:OnNewPlaneEntry(NewEntry) end
---@param Schedule TArray<FPlaneEntry>
function UWBP_DepartureScreen2AP_C:OnSchedulUpdated(Schedule) end
---@param CurrentAirplane ATradingAirplane
function UWBP_DepartureScreen2AP_C:OnAirplaneSet(CurrentAirplane) end
---@param Runway ERunway
function UWBP_DepartureScreen2AP_C:OnTakeOff(Runway) end
---@param TimeUpdated int32
function UWBP_DepartureScreen2AP_C:UpdateTimeToTakeOff(TimeUpdated) end
---@param PlaneIndex int32
---@param ItemIndex int32
---@param IconVisibility EItemIconVisibility
function UWBP_DepartureScreen2AP_C:OnitemReveal(PlaneIndex, ItemIndex, IconVisibility) end
function UWBP_DepartureScreen2AP_C:DisableOnTakeOffAndColapse() end
function UWBP_DepartureScreen2AP_C:UpdateTimeText() end
function UWBP_DepartureScreen2AP_C:OnAirstripLoaded() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_DepartureScreen2AP_C:Tick(MyGeometry, InDeltaTime) end
---@param IsThereConfirm boolean
---@param GamePadConfirmREF UConfirmAirplaneRemove_WBP_C
function UWBP_DepartureScreen2AP_C:GamePadIsThereConfirm(IsThereConfirm, GamePadConfirmREF) end
---@param DLCName EDLCName
---@param bActivated boolean
function UWBP_DepartureScreen2AP_C:CustomEvent_0(DLCName, bActivated) end
---@param EntryPoint int32
function UWBP_DepartureScreen2AP_C:ExecuteUbergraph_WBP_DepartureScreen2AP(EntryPoint) end


