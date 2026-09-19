---@meta

---@class UWBP_CinemaRewardPopup_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CloseAnim UWidgetAnimation
---@field OpenAnim UWidgetAnimation
---@field MainBG UImage
---@field MainBG_1 UImage
---@field MainOverlay UOverlay
---@field MoneyText UTextBlock
---@field RenownText UTextBlock
---@field MoneyAmount float
---@field RenownAmount float
---@field RenownReason EEconomyDetailedYieldType
local UWBP_CinemaRewardPopup_C = {}

function UWBP_CinemaRewardPopup_C:Finished_8831613F48457DD5E712C99FF99B2D0A() end
function UWBP_CinemaRewardPopup_C:Finished_927B02D5440B679A875BF8832AE9E79B() end
function UWBP_CinemaRewardPopup_C:Construct() end
---@param EntryPoint int32
function UWBP_CinemaRewardPopup_C:ExecuteUbergraph_WBP_CinemaRewardPopup(EntryPoint) end


