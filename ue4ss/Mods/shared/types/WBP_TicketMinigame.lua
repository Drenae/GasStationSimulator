---@meta

---@class UWBP_TicketMinigame_C : UTicketValidateMinigame
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpaceBarShake UWidgetAnimation
---@field Bind_Quit UWBP_KeyBindedAction_C
---@field Bind_Reject UWBP_KeyBindedAction_C
---@field Bind_Validate UWBP_KeyBindedAction_C
---@field HighScoreTextValue UTextBlock
---@field Image UImage
---@field Image_1 UImage
---@field Image_2 UImage
---@field Image_3 UImage
---@field Image_4 UImage
---@field Image_5 UImage
---@field Image_93 UImage
---@field Image_100 UImage
---@field Image_104 UImage
---@field Image_126 UImage
---@field Image_193 UImage
---@field KeyBindIMG UImage
---@field MashProgressBar UImage
---@field Overlay_Combo UOverlay
---@field Overlay_CustomerTicket UOverlay
---@field SpaceBar UImage
---@field SpaceBarButton UOverlay
---@field SpaceBarText UTextBlock
---@field WBP_Correct_Ticket_258 UWBP_Correct_Ticket_C
---@field WBP_Customer_Ticket UWBP_Customer_Ticket_C
---@field WBP_TargetTicket UWBP_CinemaTicket_C
---@field WBP_TicketToCompare UWBP_CinemaTicket_C
---@field bCustomerFakeTicket boolean
---@field bStartedValidating boolean
---@field bStuck boolean
---@field StuckClickCount int32
---@field OnValidateStart FWBP_TicketMinigame_COnValidateStart
---@field OnUnstuckAttempt FWBP_TicketMinigame_COnUnstuckAttempt
---@field OnUnstuckSuccess FWBP_TicketMinigame_COnUnstuckSuccess
---@field OnWidgetDestroy FWBP_TicketMinigame_COnWidgetDestroy
---@field bMinigameCompleted boolean
---@field QuestPopup UNotification_C
---@field NpcTicket FTicketData
---@field RevertHUDWidgetsVisibility boolean
local UWBP_TicketMinigame_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_TicketMinigame_C:OnKeyDown(MyGeometry, InKeyEvent) end
function UWBP_TicketMinigame_C:SetupStuckText() end
function UWBP_TicketMinigame_C:CompleteMinigame() end
function UWBP_TicketMinigame_C:FinishUnstuck() end
---@param bCancelMinigame boolean
function UWBP_TicketMinigame_C:DestroyWidget(bCancelMinigame) end
function UWBP_TicketMinigame_C:SetupStuck() end
function UWBP_TicketMinigame_C:TryUnstuck() end
---@param bValidated boolean
function UWBP_TicketMinigame_C:TryEndValidating(bValidated) end
function UWBP_TicketMinigame_C:StartValidating() end
function UWBP_TicketMinigame_C:QuitMinigame() end
function UWBP_TicketMinigame_C:RejectCustomer() end
function UWBP_TicketMinigame_C:LetCustomerIn() end
function UWBP_TicketMinigame_C:Finished_B0F387AC4A3696DDBE6BD58B1E18262E() end
function UWBP_TicketMinigame_C:ShowQuestPopup() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_TicketMinigame_C:Tick(MyGeometry, InDeltaTime) end
function UWBP_TicketMinigame_C:Construct() end
---@param bNewGamepadMode boolean
function UWBP_TicketMinigame_C:OnGamepadModeToggle(bNewGamepadMode) end
---@param InVisibility ESlateVisibility
function UWBP_TicketMinigame_C:OnUIHidden(InVisibility) end
---@param bFake boolean
---@param TicketData FTicketData
function UWBP_TicketMinigame_C:SetupWidget(bFake, TicketData) end
function UWBP_TicketMinigame_C:Destruct() end
---@param EntryPoint int32
function UWBP_TicketMinigame_C:ExecuteUbergraph_WBP_TicketMinigame(EntryPoint) end
---@param bCancel boolean
function UWBP_TicketMinigame_C:OnWidgetDestroy__DelegateSignature(bCancel) end
function UWBP_TicketMinigame_C:OnUnstuckSuccess__DelegateSignature() end
function UWBP_TicketMinigame_C:OnUnstuckAttempt__DelegateSignature() end
function UWBP_TicketMinigame_C:OnValidateStart__DelegateSignature() end


