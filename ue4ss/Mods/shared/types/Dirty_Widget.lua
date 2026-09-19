---@meta

---@class UDirty_Widget_C : UGSSInnerWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ToiletPlus UWidgetAnimation
---@field ToiletMInus UWidgetAnimation
---@field ShopPlus UWidgetAnimation
---@field ShopMinus UWidgetAnimation
---@field GasStationSlider1 USlider
---@field Image_3 UImage
---@field Image_588 UImage
---@field MainCanvas UCanvasPanel
---@field ProgressBar UProgressBar
---@field ProgressBar_95 UProgressBar
---@field SecondBG UImage
---@field Toilet_Slider_Overlay UOverlay
---@field ToiletSlider1 USlider
---@field WC_IMG UImage
---@field Shop float
---@field Toilet float
local UDirty_Widget_C = {}

function UDirty_Widget_C:CheckVisibility() end
---@param House float
---@param Toilet float
function UDirty_Widget_C:UpdateDecal(House, Toilet) end
function UDirty_Widget_C:Construct() end
---@param GSSQuest UGSSQuest
function UDirty_Widget_C:OnQuestSpawned_Event_0(GSSQuest) end
---@param GameLoaded boolean
function UDirty_Widget_C:OnFinishGameLoaded_Event_0(GameLoaded) end
---@param HouseDirtyPercent float
---@param ToiletDirtyPercent float
---@param ShowerDirtyPercent float
function UDirty_Widget_C:OnDirtyLevelUpdated_Event_0(HouseDirtyPercent, ToiletDirtyPercent, ShowerDirtyPercent) end
---@param NewUnlockableUIState FUnlockableUIState
function UDirty_Widget_C:CheckNotificationVisibility(NewUnlockableUIState) end
---@param EntryPoint int32
function UDirty_Widget_C:ExecuteUbergraph_Dirty_Widget(EntryPoint) end


