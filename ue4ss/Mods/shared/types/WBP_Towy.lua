---@meta

---@class UWBP_Towy_C : UTowyWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OverHeatedAnimation UWidgetAnimation
---@field NoFuelAnimation UWidgetAnimation
---@field ActiveMagnetInteraction UWBP_KeyBindedAction_C
---@field ConnectingTxt UTextBlock
---@field ControllsHorizontalDriveMode UVerticalBox
---@field ControllsHorizontalMagnetMode UVerticalBox
---@field CoolEngineInteraction UScaleBox
---@field ExtendArmFirst UWBP_KeyBindedAction_C
---@field ExtendArmSecond UWBP_KeyBindedAction_C
---@field F_Interaction_Second UWBP_KeyBindedAction_C
---@field F_InteractionFirst_1 UWBP_KeyBindedAction_C
---@field FuelPointer UImage
---@field FuelProgress UImage
---@field HandbrakeInteraction UWBP_KeyBindedAction_C
---@field Icon_IMG UImage
---@field Image_4 UImage
---@field Interaction UOverlay
---@field KeyLegend_Switcher UWidgetSwitcher
---@field LowerMagnetInteractionFirst UWBP_KeyBindedAction_C
---@field LowerMagnetInteractionSecond UWBP_KeyBindedAction_C
---@field MiniGames_Tutorial UMiniGames_Tutorial_C
---@field ModSwitching_Interaction UWBP_KeyBindedAction_C
---@field MOVE_BACK UWBP_KeyBindedAction_C
---@field MOVE_FORWARD UWBP_KeyBindedAction_C
---@field MOVE_LEFT UWBP_KeyBindedAction_C
---@field MOVE_RIGHT UWBP_KeyBindedAction_C
---@field MoveMagnet_1 UWBP_KeyBindedAction_C
---@field MoveMagnet_2 UWBP_KeyBindedAction_C
---@field MoveMagnet_3 UWBP_KeyBindedAction_C
---@field MoveMagnet_4 UWBP_KeyBindedAction_C
---@field NoFuelOverlay UOverlay
---@field OverHeat_Overlay UOverlay
---@field PREFIX_TXT UTextBlock
---@field PrefixTXT UTextBlock
---@field PrefixTXT_1 UTextBlock
---@field RPM_Interaction UWBP_KeyBindedAction_C
---@field SHIFT_INTERACTION UWBP_KeyBindedAction_C
---@field SOFIX_TXT UTextBlock
---@field SwitchModeInteractionSecond UWBP_KeyBindedAction_C
---@field Percent float
---@field Tip UMiniGames_Tutorial_C
---@field Actor AActor
---@field OverHeatNotification UWBP_DiggerOverHeat_C
---@field LocalOverheated float
---@field Towy ATowy
local UWBP_Towy_C = {}

function UWBP_Towy_C:NoFuel() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_Towy_C:Tick(MyGeometry, InDeltaTime) end
function UWBP_Towy_C:Destruct() end
function UWBP_Towy_C:Construct() end
---@param ActionName FName
function UWBP_Towy_C:KeyBindChanged(ActionName) end
function UWBP_Towy_C:KeyBindReset() end
---@param IsMagnetMode boolean
function UWBP_Towy_C:OnModeChange(IsMagnetMode) end
---@param EntryPoint int32
function UWBP_Towy_C:ExecuteUbergraph_WBP_Towy(EntryPoint) end


