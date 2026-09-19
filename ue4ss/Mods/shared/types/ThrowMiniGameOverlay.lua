---@meta

---@class UThrowMiniGameOverlay_C : UWBP_ThrowMinigame_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field alert UTextBlock
---@field Basketball_ICON UImage
---@field Image_414 UImage
---@field Throwing_ICON UImage
---@field Player APlayerCharacter_BP_C
local UThrowMiniGameOverlay_C = {}

function UThrowMiniGameOverlay_C:Construct() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UThrowMiniGameOverlay_C:Tick(MyGeometry, InDeltaTime) end
function UThrowMiniGameOverlay_C:Andrzej() end
function UThrowMiniGameOverlay_C:SetText() end
---@param EntryPoint int32
function UThrowMiniGameOverlay_C:ExecuteUbergraph_ThrowMiniGameOverlay(EntryPoint) end


