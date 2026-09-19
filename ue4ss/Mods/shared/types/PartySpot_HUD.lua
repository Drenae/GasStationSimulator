---@meta

---@class UPartySpot_HUD_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CanvasPanel_0 UCanvasPanel
---@field MiniGames_Tutorial UMiniGames_Tutorial_C
---@field PartySpotREF APartySpot
---@field PartySpotTutorialREF UMiniGames_Tutorial_C
local UPartySpot_HUD_C = {}

function UPartySpot_HUD_C:Construct() end
---@param EntryPoint int32
function UPartySpot_HUD_C:ExecuteUbergraph_PartySpot_HUD(EntryPoint) end


