---@meta

---@class UProgressRoad_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field UnlockAnim UWidgetAnimation
---@field BlockedByLevelIMG UImage
---@field CanvasPanel_0 UCanvasPanel
---@field Icon_BG UImage
---@field Level UTextBlock
---@field LockedDecoration_IMG UImage
---@field LockedIcon UImage
---@field Question_ICO UImage
---@field Road_Progress_old UProgressBar
---@field Star_ICO UImage
---@field UnlockedDecoration_IMG UImage
---@field UnlockLevelOV UOverlay
---@field Unlocked boolean
---@field StartWithAnimation boolean
---@field LevelTounlock int32
---@field StationREF ACentralShop
---@field Texture UTexture2D
local UProgressRoad_WBP_C = {}

function UProgressRoad_WBP_C:Construct() end
---@param EntryPoint int32
function UProgressRoad_WBP_C:ExecuteUbergraph_ProgressRoad_WBP(EntryPoint) end


