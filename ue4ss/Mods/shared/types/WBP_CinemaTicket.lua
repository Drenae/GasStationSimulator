---@meta

---@class UWBP_CinemaTicket_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Image_44 UImage
---@field Image_55 UImage
---@field Image_117 UImage
---@field Image_MovieImage UImage
---@field TextBlock_DigitId UTextBlock
---@field TextBlock_MovieNameDraculaUntold UTextBlock
---@field TextBlock_Time UTextBlock
---@field ['Ticket Data'] FTicketData
local UWBP_CinemaTicket_C = {}

---@param InText FText
---@return FText
function UWBP_CinemaTicket_C:ConvertTo12HourFormat(InText) end
---@param Loaded UObject
function UWBP_CinemaTicket_C:OnLoaded_B258DE0143E390B2560DAD9050633FEA(Loaded) end
function UWBP_CinemaTicket_C:Construct() end
---@param TicketData FTicketData
function UWBP_CinemaTicket_C:SetupData(TicketData) end
---@param EntryPoint int32
function UWBP_CinemaTicket_C:ExecuteUbergraph_WBP_CinemaTicket(EntryPoint) end


