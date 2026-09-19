---@meta

---@class UWBP_ExitMapStart_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SideNotification UWidgetAnimation
---@field RedVignet UWidgetAnimation
---@field Popup_ANIM UWidgetAnimation
---@field Image UImage
---@field Image_32 UImage
---@field Image_104 UImage
---@field Time UTextBlock
---@field Destructed boolean
---@field NoIDupa FWBP_ExitMapStart_CNoIDupa
---@field FadeOutREF UWBP_FadeInOut_C
---@field FadeOutTime float
---@field RedVignetTime float
local UWBP_ExitMapStart_C = {}

---@param Time float
function UWBP_ExitMapStart_C:UpdateTime(Time) end
function UWBP_ExitMapStart_C:Construct() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_ExitMapStart_C:Tick(MyGeometry, InDeltaTime) end
function UWBP_ExitMapStart_C:Destruct() end
function UWBP_ExitMapStart_C:TimerFinished() end
function UWBP_ExitMapStart_C:MainMenuOn() end
---@param EntryPoint int32
function UWBP_ExitMapStart_C:ExecuteUbergraph_WBP_ExitMapStart(EntryPoint) end
function UWBP_ExitMapStart_C:NoIDupa__DelegateSignature() end


