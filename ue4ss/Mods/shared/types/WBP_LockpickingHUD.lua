---@meta

---@class UWBP_LockpickingHUD_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TutorialBounceAnim UWidgetAnimation
---@field TutorialAnimationFade UWidgetAnimation
---@field Notification UWidgetAnimation
---@field A_TO_ROTATE_Tutorial UWBP_KeyBindedAction_C
---@field AfterLootingOV UOverlay
---@field D_TO_ROTATE_Tutorial UWBP_KeyBindedAction_C
---@field GamePadInteraction UHorizontalBox
---@field Image UImage
---@field Image_1 UImage
---@field Image_2 UImage
---@field Image_3 UImage
---@field Image_4 UImage
---@field Image_52 UImage
---@field Image_95 UImage
---@field Image_278 UImage
---@field Image_351 UImage
---@field IMG_Overlay UOverlay
---@field Jump_Tutorial UWBP_KeyBindedAction_C
---@field LockedBox UHorizontalBox
---@field LockIMG UImage
---@field NoPickLock_Overlay UOverlay
---@field NotificationText UTextBlock
---@field ObjectInfoBox UVerticalBox
---@field OrTXT UTextBlock
---@field Overlay_Count UOverlay
---@field PickingInfoBox UVerticalBox
---@field PrefixTXT UTextBlock
---@field TutorialCanvas UCanvasPanel
---@field TXT_LockName UTextBlock
---@field TXT_LockpickAmount UTextBlock
---@field TXT_LockType UTextBlock
---@field TXT_ObjectName UTextBlock
---@field LockTypeText FText
---@field ObjectNameText FText
---@field LockDifficulty int32
---@field ['IsLocked?'] boolean
---@field ['InfoBoxVisible?'] boolean
---@field ['LockPickingInfoVisible?'] boolean
---@field Lockpicks FText
local UWBP_LockpickingHUD_C = {}

---@param bShow boolean
function UWBP_LockpickingHUD_C:SetLockpickCountVisibility(bShow) end
---@return ESlateVisibility
function UWBP_LockpickingHUD_C:SetLockPickBoxVisibility() end
---@return ESlateVisibility
function UWBP_LockpickingHUD_C:GetObjectInfoBoxVisibility() end
---@return FText
function UWBP_LockpickingHUD_C:GetLockTypeText() end
---@return ESlateVisibility
function UWBP_LockpickingHUD_C:GetLockedBoxVisibility() end
---@return FText
function UWBP_LockpickingHUD_C:GetObjectName() end
---@return FText
function UWBP_LockpickingHUD_C:GetLockClassText() end
function UWBP_LockpickingHUD_C:Finished_2FA14D184B3F9B896A6F7BBA84E53835() end
function UWBP_LockpickingHUD_C:LoopTutorialAnim() end
---@param HideTutorial EUMGSequencePlayMode::Type
function UWBP_LockpickingHUD_C:PlayTutorialAnimation(HideTutorial) end
---@param EntryPoint int32
function UWBP_LockpickingHUD_C:ExecuteUbergraph_WBP_LockpickingHUD(EntryPoint) end


