---@meta

---@class ADanceFloor_BP_C : ADanceFloor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Arrow14 UArrowComponent
---@field Arrow13 UArrowComponent
---@field Arrow12 UArrowComponent
---@field Arrow11 UArrowComponent
---@field Arrow10 UArrowComponent
---@field Arrow9 UArrowComponent
---@field Arrow8 UArrowComponent
---@field arrow UArrowComponent
---@field Arrow6 UArrowComponent
---@field Arrow5 UArrowComponent
---@field Arrow4 UArrowComponent
---@field Arrow3 UArrowComponent
---@field Arrow2 UArrowComponent
---@field Arrow1 UArrowComponent
---@field Arrow7 UArrowComponent
---@field NumberOfFullBaskets int32
---@field PlayingAudioComp UAudioComponent
local ADanceFloor_BP_C = {}

---@param Loaded UObject
function ADanceFloor_BP_C:OnLoaded_AD4D9CD44DBFADDED07E3CB0D59939F6(Loaded) end
---@param Loaded UObject
function ADanceFloor_BP_C:OnLoaded_D7A0F403475E3E4B673A798A1532C1AC(Loaded) end
function ADanceFloor_BP_C:PlaySound() end
---@param DeltaSeconds float
function ADanceFloor_BP_C:ReceiveTick(DeltaSeconds) end
function ADanceFloor_BP_C:ReceiveBeginPlay() end
function ADanceFloor_BP_C:PartyEndNPCSounds() end
---@param EntryPoint int32
function ADanceFloor_BP_C:ExecuteUbergraph_DanceFloor_BP(EntryPoint) end


