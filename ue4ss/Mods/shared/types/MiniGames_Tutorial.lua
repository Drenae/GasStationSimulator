---@meta

---@class UMiniGames_Tutorial_C : UMinigameTutorialWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NextPageAnimation UWidgetAnimation
---@field ConstructAnimation UWidgetAnimation
---@field CanvasPanel_0 UCanvasPanel
---@field GetKaysForTutorial UWBP_KeyBindedAction_C
---@field HitBlockOverlay UOverlay
---@field Image_908 UImage
---@field TextScrollBox UScrollBox
---@field TutorailNextPageText UTextBlock
---@field Tutorial UOverlay
---@field WBP_PressForTutorial UWBP_PressForTutorial_C
---@field WBP_PressInTutorial UWBP_PressInTutorial_C
---@field ManyPages boolean
---@field ActionButtonOne FText
---@field Owner AActor
---@field ScrollingSpeed float
---@field TutorialOpened boolean
---@field CircularMenuButton FText
---@field PlayerCharREF AGSSPlayerCharacter
---@field NotGarageTutorials boolean
---@field CreateFromForce boolean
---@field MinigameType uint8
---@field FillInfoOnConstruct boolean
---@field PressTooltipAnchors FVector2D
---@field IsPlayerOverlayTutorial boolean
---@field HidePressForTutorial boolean
---@field ShouldRemoveAfterAnimation boolean
---@field OverlayOffset FMargin
---@field EnteringCharacterMinigameState ECharacterState
---@field WidgetToSetFocuseBackTo UUserWidget
---@field UseCustomPressForTutorialPosition boolean
---@field CustomPressForTutorialPosition FVector2D
local UMiniGames_Tutorial_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UMiniGames_Tutorial_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@param IsOpened boolean
function UMiniGames_Tutorial_C:IsAnotherTutorialOpened(IsOpened) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UMiniGames_Tutorial_C:OnMouseWheel(MyGeometry, MouseEvent) end
---@param DestroyedActor AActor
function UMiniGames_Tutorial_C:OnDestroyed_Event_0(DestroyedActor) end
function UMiniGames_Tutorial_C:ScrollOffsetDown() end
function UMiniGames_Tutorial_C:ScrollUp() end
function UMiniGames_Tutorial_C:UpdateFromGarage() end
function UMiniGames_Tutorial_C:Destruct() end
function UMiniGames_Tutorial_C:Construct() end
function UMiniGames_Tutorial_C:CreateTutorial() end
---@param IsDesignTime boolean
function UMiniGames_Tutorial_C:PreConstruct(IsDesignTime) end
function UMiniGames_Tutorial_C:CloseTutorialIfOpened() end
---@param Force boolean
function UMiniGames_Tutorial_C:ForceTutorialOpened(Force) end
---@param NewValue boolean
function UMiniGames_Tutorial_C:SetIsPlayerOverlayTutorial(NewValue) end
function UMiniGames_Tutorial_C:OnConstructAnimationFinished() end
function UMiniGames_Tutorial_C:RemoveAfterAnimation() end
function UMiniGames_Tutorial_C:AllowTutorialCreation() end
function UMiniGames_Tutorial_C:OnTutorialClosed() end
function UMiniGames_Tutorial_C:OnTutorialShown() end
---@param OffsettoAd float
function UMiniGames_Tutorial_C:AddScrollOffset(OffsettoAd) end
---@param EntryPoint int32
function UMiniGames_Tutorial_C:ExecuteUbergraph_MiniGames_Tutorial(EntryPoint) end


