---@meta

---@class UGarage_Overlay_C : UGSSWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CanvasPanel_0 UCanvasPanel
---@field MiniGame_Notification UMiniGame_Notification_C
---@field ActiveMinigame boolean
---@field AICharacter AAICharacterBase
---@field GarageMinigame UGarage_Minigame_C
local UGarage_Overlay_C = {}

---@param Condition boolean
---@param ActiveMinigame boolean
function UGarage_Overlay_C:WelcomePlayer(Condition, ActiveMinigame) end
---@param Enable boolean
---@param AICharacter AAICharacterBase
function UGarage_Overlay_C:MinigameMode(Enable, AICharacter) end
---@param EntryPoint int32
function UGarage_Overlay_C:ExecuteUbergraph_Garage_Overlay(EntryPoint) end


