---@meta

---@class UWBP_FuelBeforeTanking_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Best_Score_TXT UTextBlock
---@field ControllsHorizontal UVerticalBox
---@field Image_278 UImage
---@field InvalidationBox_0 UInvalidationBox
---@field LAST_Score_TXT UTextBlock
---@field MiniGames_Tutorial UMiniGames_Tutorial_C
---@field StartFuelingInfoPad UOverlay
---@field WBP_BuyFuelNotification UWBP_BuyFuelNotification_C
---@field WBP_FuelStatus UWBP_FuelStatus_C
---@field BuyFuelOnScreen boolean
---@field bIsGasStation boolean
---@field CurInventory UInventoryComponent
---@field TutorialType EGameActivityType
local UWBP_FuelBeforeTanking_C = {}

function UWBP_FuelBeforeTanking_C:Construct() end
---@param CurrentFuelAmount float
function UWBP_FuelBeforeTanking_C:UpdateOnFuelStatus(CurrentFuelAmount) end
function UWBP_FuelBeforeTanking_C:Destruct() end
function UWBP_FuelBeforeTanking_C:UpdateOnGamePad() end
---@param EntryPoint int32
function UWBP_FuelBeforeTanking_C:ExecuteUbergraph_WBP_FuelBeforeTanking(EntryPoint) end


