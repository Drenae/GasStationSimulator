---@meta

---@class ADriveInCinema_BP_C : ADriveInCinema
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TutorialRef UMiniGames_Tutorial_C
local ADriveInCinema_BP_C = {}

function ADriveInCinema_BP_C:PostLoadMapsBlueprintEvent() end
function ADriveInCinema_BP_C:SpecialOpenCloseEvent() end
function ADriveInCinema_BP_C:ReceiveBeginPlay() end
---@param bIsOpen boolean
function ADriveInCinema_BP_C:OnGasStationOpen(bIsOpen) end
---@param DLCName EDLCName
---@param bActivated boolean
ADriveInCinema_BP_C['On DLC Activation State Changed'] = function(self, DLCName, bActivated) end
ADriveInCinema_BP_C['Cancel All Movies'] = function(self, ) end
---@param EntryPoint int32
function ADriveInCinema_BP_C:ExecuteUbergraph_DriveInCinema_BP(EntryPoint) end


