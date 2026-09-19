---@meta

---@class UFlipbook_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ImageWidget UImage
---@field MySizeBox USizeBox
---@field ['isPlaying?'] boolean
---@field TimerHandle FTimerHandle
---@field FrameIndex int32
---@field FramesTotal int32
---@field Brushes TArray<FSlateBrush>
---@field FlipbookBrush FFlipbookBrush
---@field SpritePadding FMargin
---@field SourceFlipbook UPaperFlipbook
---@field FrameRate float
local UFlipbook_C = {}

---@param KeyFrame int32
UFlipbook_C['CSW::SetBrushAtKeyFrame'] = function(self, KeyFrame) end
---@param FrameIndex int32
---@return int32
function UFlipbook_C:GetKeyFrameIndexAtFrame(FrameIndex) end
---@return float
function UFlipbook_C:GetFlipbookFramerate() end
function UFlipbook_C:FlipbookTick() end
function UFlipbook_C:TryInitTimer() end
UFlipbook_C['CSW::StopFlipbookAnimation'] = function(self, ) end
---@param IsDesignTime boolean
function UFlipbook_C:PreConstruct(IsDesignTime) end
---@param SourceFlipbookHasChanged_ boolean
---@param AppearanceHasChanged_ boolean
UFlipbook_C['CSW::RestartWithUpdatedParameters'] = function(self, SourceFlipbookHasChanged_, AppearanceHasChanged_) end
function UFlipbook_C:InitAppearance() end
UFlipbook_C['Init Brushes'] = function(self, ) end
UFlipbook_C['Init Timer'] = function(self, ) end
---@param Start_at_Frame int32
UFlipbook_C['CSW::PlayFlipbookAnimation'] = function(self, Start_at_Frame) end
UFlipbook_C['CSW::PauseFlipbookAnimation'] = function(self, ) end
function UFlipbook_C:Initialize() end
---@param EntryPoint int32
function UFlipbook_C:ExecuteUbergraph_Flipbook(EntryPoint) end


