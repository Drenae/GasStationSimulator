---@meta

---@class UGarage_Minigame_C : UGSSWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CanvasPanel_0 UCanvasPanel
---@field ControllsHorizontal UVerticalBox
---@field Image_1 UImage
---@field Image_2 UImage
---@field Image_117 UImage
---@field Image_163 UImage
---@field InvalidationBox_0 UInvalidationBox
---@field Jump_Interaction UWBP_KeyBindedAction_C
---@field MiniGames_Tutorial UMiniGames_Tutorial_C
---@field MOVE_FORWARD UWBP_KeyBindedAction_C
---@field RepairedNumber_TXT UTextBlock
---@field ToRepair_TXT UTextBlock
---@field AICharacter AAICharacterBase
---@field Active boolean
---@field Time float
---@field NewVar_1 int32
---@field NewVar_0 int32
---@field InfoWidget UUserWidget
---@field PlayerCharacter AGSSPlayerCharacter
local UGarage_Minigame_C = {}

function UGarage_Minigame_C:Construct() end
---@param NewParam boolean
function UGarage_Minigame_C:ActiveMinigameGarage(NewParam) end
---@param TargetActor AActor
---@param Fixed boolean
function UGarage_Minigame_C:CustomEvent_1(TargetActor, Fixed) end
---@param EntryPoint int32
function UGarage_Minigame_C:ExecuteUbergraph_Garage_Minigame(EntryPoint) end


