---@meta

---@class UWBP_TrafficStats_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field hoveranimtext UWidgetAnimation
---@field AnimIcon UWidgetAnimation
---@field background UImage
---@field CurrentEventImage UImage
---@field CurrentFactorBox UVerticalBox
---@field Event_Icon UImage
---@field FactorBox UVerticalBox
---@field FactorDescription UTextBlock
---@field FactorInput UTextBlock
---@field FactorRowDecorations UWBP_FactorRow_C
---@field FactorRowEvent UWBP_FactorRow_C
---@field FactorRowFuel UWBP_FactorRow_C
---@field FactorRowLandmarks UWBP_FactorRow_C
---@field FactorRowPopularity UWBP_FactorRow_C
---@field FactorRowTime UWBP_FactorRow_C
---@field FactorTitle UTextBlock
---@field IconSwitcher UWidgetSwitcher
---@field Image UImage
---@field Image_1 UImage
---@field Image_3 UImage
---@field Image_62 UImage
---@field Image_103 UImage
---@field Image_283 UImage
---@field Image_367 UImage
---@field MiniGames_Tutorial UMiniGames_Tutorial_C
---@field RowDetalisBox UOverlay
---@field TrafficImpactNumber UTextBlock
---@field TrafficWhole UTextBlock
---@field Upcoming UTextBlock
---@field UpcomingEvent UPC_TrafficStatsField_WBP_C
---@field UpcomingEventbox UVerticalBox
---@field UpcomingIcon UImage
---@field CurrentTrafficLabel FText
---@field CurrentEventID int32
---@field UpcomingEventID int32
---@field CurrentEventValid boolean
---@field UpcomingEventValid boolean
---@field DefaultCurrentEventTooltip FText
---@field DefaultUpcomingEventTooltip FText
---@field ImpactTooltip UTrafficInfluence_Tooltip_C
---@field UpcomingEventTooltip UTrafficInfluence_Tooltip_C
---@field OnClosed FWBP_TrafficStats_COnClosed
---@field CurrentIndex int32
---@field ParentWidget UUserWidget
---@field UpcomingEventsImages TMap<int32, UTexture>
local UWBP_TrafficStats_C = {}

---@param UpdatedEventID int32
function UWBP_TrafficStats_C:CheckforNewEvent(UpdatedEventID) end
---@param Show boolean
function UWBP_TrafficStats_C:ShowUpcomingEvent(Show) end
function UWBP_TrafficStats_C:SetChunchumanchu() end
function UWBP_TrafficStats_C:SetMainTooltipText() end
---@param InputPin UWBP_FactorRow_C
UWBP_TrafficStats_C['Set Row Texts'] = function(self, InputPin) end
---@param Up boolean
function UWBP_TrafficStats_C:NavigateTroughFactorRows(Up) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_TrafficStats_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@param Index int32
---@param Low int32
---@param High int32
---@return FSlateColor
function UWBP_TrafficStats_C:GetFactorInputColor(Index, Low, High) end
function UWBP_TrafficStats_C:UpdateTooltipDesc() end
---@return UWidget
function UWBP_TrafficStats_C:GetToolTipWidget_UpcomingEvent() end
function UWBP_TrafficStats_C:BindFactorRows() end
function UWBP_TrafficStats_C:UpdateFields() end
---@param EventId int32
function UWBP_TrafficStats_C:UpdateIncomingEventDescription(EventId) end
---@param EventFound boolean
function UWBP_TrafficStats_C:IsCurrentEventValid(EventFound) end
function UWBP_TrafficStats_C:UpdateValidEventDescription() end
---@param CurrentEventID int32
---@param UpcomingEventID int32
---@param CurrentEventTimeLeft FTimeStruct
---@param UpcomingEventTimeLeft FTimeStruct
function UWBP_TrafficStats_C:UpdateTrafficEvents(CurrentEventID, UpcomingEventID, CurrentEventTimeLeft, UpcomingEventTimeLeft) end
function UWBP_TrafficStats_C:Destruct() end
---@param UpdatedImpact int32
function UWBP_TrafficStats_C:UpdateTrafficImpact(UpdatedImpact) end
function UWBP_TrafficStats_C:Construct() end
function UWBP_TrafficStats_C:OnInitialized() end
---@param FactorRow UWBP_FactorRow_C
---@param Hovered boolean
function UWBP_TrafficStats_C:FactorRowHoover(FactorRow, Hovered) end
---@param AngerState EChunchumanchuAnger
---@param Value float
---@param ValueChanged float
UWBP_TrafficStats_C['OnChunchumanchu VolcanUpdate'] = function(self, AngerState, Value, ValueChanged) end
function UWBP_TrafficStats_C:Return() end
---@param IsDesignTime boolean
function UWBP_TrafficStats_C:PreConstruct(IsDesignTime) end
---@param bNewGamepadMode boolean
function UWBP_TrafficStats_C:UpdateKey(bNewGamepadMode) end
---@param RowToShow UWBP_FactorRow_C
function UWBP_TrafficStats_C:ShowFactorRow(RowToShow) end
---@param EntryPoint int32
function UWBP_TrafficStats_C:ExecuteUbergraph_WBP_TrafficStats(EntryPoint) end
function UWBP_TrafficStats_C:OnClosed__DelegateSignature() end


