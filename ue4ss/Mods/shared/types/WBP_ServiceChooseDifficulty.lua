---@meta

---@class UWBP_ServiceChooseDifficulty_C : UGSSBaseWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Backgound UImage
---@field Button_Easy UWBP_ServiceDifficultyButton_C
---@field Button_Hard UWBP_ServiceDifficultyButton_C
---@field Button_Normal UWBP_ServiceDifficultyButton_C
---@field Image_bg UImage
---@field MiniGames_Tutorial UMiniGames_Tutorial_C
---@field OnChosenDifficulty FWBP_ServiceChooseDifficulty_COnChosenDifficulty
---@field ['Guest Service Tag'] FGameplayTag
---@field ['Current Button'] UWBP_ServiceDifficultyButton_C
---@field IsUsingGamepad boolean
---@field DifficultyButtons TArray<UWBP_ServiceDifficultyButton_C>
local UWBP_ServiceChooseDifficulty_C = {}

UWBP_ServiceChooseDifficulty_C['Fill Tutorial Info'] = function(self, ) end
function UWBP_ServiceChooseDifficulty_C:SetupDifficultyVizualsAllButtons() end
---@param Forward boolean
---@param Button UWBP_ServiceDifficultyButton_C
UWBP_ServiceChooseDifficulty_C['Get Relative Button In Direction'] = function(self, Forward, Button) end
function UWBP_ServiceChooseDifficulty_C:HooverCurrentButton() end
function UWBP_ServiceChooseDifficulty_C:UnhooverCurrentButton() end
---@param IsGamepad boolean
function UWBP_ServiceChooseDifficulty_C:ChangeInputDevice(IsGamepad) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_ServiceChooseDifficulty_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@param Difficulty EGuestServiceDifficulty
UWBP_ServiceChooseDifficulty_C['Choose Difficulty'] = function(self, Difficulty) end
---@param Tag FGameplayTag
---@param AvailableDifficulties TArray<EGuestServiceDifficulty>
function UWBP_ServiceChooseDifficulty_C:Init(Tag, AvailableDifficulties) end
function UWBP_ServiceChooseDifficulty_C:Construct() end
---@param Difficulty_Button UWBP_ServiceDifficultyButton_C
UWBP_ServiceChooseDifficulty_C['On Difficulty Clicked'] = function(self, Difficulty_Button) end
function UWBP_ServiceChooseDifficulty_C:OnInitialized() end
function UWBP_ServiceChooseDifficulty_C:OnDefaultEscape() end
function UWBP_ServiceChooseDifficulty_C:GamePadEscape() end
---@param EntryPoint int32
function UWBP_ServiceChooseDifficulty_C:ExecuteUbergraph_WBP_ServiceChooseDifficulty(EntryPoint) end
---@param Difficulty EGuestServiceDifficulty
function UWBP_ServiceChooseDifficulty_C:OnChosenDifficulty__DelegateSignature(Difficulty) end


